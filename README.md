# MLP-Aware Cache Design in SimpleScalar

![SimpleScalar](https://img.shields.io/badge/SimpleScalar-v3.0-blue)
![Language](https://img.shields.io/badge/Language-C-orange)
![Platform](https://img.shields.io/badge/Platform-Linux-lightgrey)
![Cache](https://img.shields.io/badge/Cache-MLP--Aware-green)

## 📖 Project Overview

An enhanced **SimpleScalar simulator** implementing a **Memory-Level Parallelism (MLP)-Aware Cache Replacement Policy** that improves cache performance by considering memory access overlap patterns rather than relying solely on traditional recency-based policies.

## 🎯 Motivation

Traditional cache replacement policies (LRU, FIFO) ignore the performance impact of cache misses:

- **Critical Miss**: Isolated miss causing significant CPU stall
- **Non-critical Miss**: Overlapping misses that hide latency
- **Problem**: LRU may evict blocks that cause long stalls
- **Solution**: MLP-aware policy evicts less critical blocks first

## 🏗️ Implementation

### Modified Files
- `cache.c` - Core cache replacement logic
- `sim-outorder.c` - Out-of-order execution model  
- `stats.c` - Statistics collection

### 🔧 Core Components

#### 1. MLP Tracking Variables
```c
int active_misses;                    // Tracks ongoing cache misses
cycle_t miss_start_cycle;            // Miss start timestamp
cycle_t miss_end_cycle;              // Miss completion timestamp  
float mlp_score;                     // Criticality score for cache block
```

## 2. MLP Score Calculation

repl->mlp_score = 1.0f / (float) repl->overlapping_misses;
A lower MLP score means the block was part of more overlapping misses,
making it less critical to retain in the cache.

## 3. Victim Selection Logic

Chooses the block with the lowest MLP score for eviction.
In case of a tie, falls back to LRU (Least Recently Used).
Adds a small random bias to diversify victim selection.


### 🔹 4. Global Statistics Added

| Variable | Description |
|-----------|--------------|
| **mlp_miss_count** | Number of misses with MLP measurement |
| **mlp_sum_fixed** | Cumulative sum of scaled MLP scores |
| **avg_mlp** | Average MLP score = `mlp_sum_fixed / 1e6 / mlp_miss_count` |


---

# 🧩 Working Principle

1. When a cache miss occurs, it increments **active_misses**.  
2. Each miss records its **start cycle** and the number of **overlapping misses**.  
3. When the miss completes, the cache updates its **MLP score**.  
4. The replacement policy then uses this score to evict the **least critical block**.  
5. **Statistics** are collected and displayed in the simulation output.

---
---

# 🧪 Results and Observations

- The **MLP-aware cache** may not drastically change total **hits** or **misses**.  
- It improves **overall performance (IPC)** and **reduces stall cycles**.  
- The **average MLP score** indicates how well the system overlaps **memory operations**.

---
