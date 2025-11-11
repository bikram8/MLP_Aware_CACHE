#include <stdio.h>

#define N 32

float A[N][N], B[N][N], C[N][N];

int main()
{
    int i, j, k;

    // Initialize matrices
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = (float)(i + j);
            B[i][j] = (float)(i - j);
            C[i][j] = 0.0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Resultant 32x32 Matrix (C = A x B):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%8.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

