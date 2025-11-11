#!/bin/bash
# run_high_mlp_sweep.sh
# Usage: ./run_high_mlp_sweep.sh <simulator_binary_baseline> <simulator_binary_mlpaware>
# Example: ./run_high_mlp_sweep.sh ./sim-outorder ./sim-outorder-mlp

if [ $# -lt 2 ]; then
  echo "Usage: $0 <sim_baseline> <sim_mlpaware>"
  exit 1
fi

SIM_BASE=$1
SIM_MLP=$2

# SimpleScalar cross-compiler prefix (adjust if different)
CC=sslittle-na-sstrix-gcc

SRC=high_mlp.c
OUT=high_mlp.out

echo "Compiling benchmark..."
$CC -O2 -static $SRC -o $OUT || { echo "compile failed"; exit 2; }

# Parameter arrays (you can add more)
STREAMS=(8 16 32 48)
# small L1D sizes to make replacement matter; adjust as needed
DL1_CONFIGS=("dl1:dl1:32:32:4:l" "dl1:dl1:16:32:4:l" "dl1:dl1:8:32:4:l")
IL1_CONFIG="il1:il1:128:32:1:l"  # instruction cache unchanged

OUTDIR=results_high_mlp
mkdir -p $OUTDIR

echo "Simulating sweeps..."
for s in "${STREAMS[@]}"; do
  for dl1 in "${DL1_CONFIGS[@]}"; do
    base_tag="s${s}_dl1_${dl1//:/_}"
    echo "Running baseline: streams=$s dl1=$dl1 ..."
    ./$SIM_BASE -cache:il1 $IL1_CONFIG -cache:$dl1 -max:inst 200000 $OUT $s > $OUTDIR/${base_tag}_baseline.stat 2>&1

    echo "Running mlp-aware: streams=$s dl1=$dl1 ..."
    ./$SIM_MLP -cache:il1 $IL1_CONFIG -cache:$dl1 -max:inst 200000 $OUT $s > $OUTDIR/${base_tag}_mlp.stat 2>&1

    # extract key metrics and print line summary
    IPC_BASE=$(grep -m1 "^sim_IPC" $OUTDIR/${base_tag}_baseline.stat | awk '{print $2}')
    IPC_MLP=$(grep -m1 "^sim_IPC" $OUTDIR/${base_tag}_mlp.stat | awk '{print $2}')
    AVGMLP_BASE=$(grep -m1 "^avg_mlp" $OUTDIR/${base_tag}_baseline.stat | awk '{print $2}')
    AVGMLP_MLP=$(grep -m1 "^avg_mlp" $OUTDIR/${base_tag}_mlp.stat | awk '{print $2}')

    echo "RESULT ${base_tag} baseline_IPC=${IPC_BASE} mlp_IPC=${IPC_MLP} baseline_avg_mlp=${AVGMLP_BASE} mlp_avg_mlp=${AVGMLP_MLP}"
  done
done

echo "Done. Stats in $OUTDIR"
