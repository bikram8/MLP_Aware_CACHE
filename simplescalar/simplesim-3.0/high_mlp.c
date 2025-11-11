#include <stdio.h>
#include <stdlib.h>

#define N  (1 << 20)
#define STREAMS 8

int main()
{
    int i, s, iter;
    int *A[STREAMS];
    int sum = 0;

    /* allocate arrays */
    for (s = 0; s < STREAMS; s++) {
        A[s] = (int *)malloc(N * sizeof(int));
        if (!A[s]) {
            printf("malloc failed for stream %d\n", s);
            return 1;
        }
    }

    /* initialize */
    for (s = 0; s < STREAMS; s++) {
        for (i = 0; i < N; i++)
            A[s][i] = i + s;
    }

    /* compute */
    for (iter = 0; iter < 50; iter++) {
        for (i = 0; i < N; i += 32) {
            /* independent memory accesses */
            for (s = 0; s < STREAMS; s++)
                sum += A[s][i];
        }
    }

    printf("sum=%d\n", sum);

    /* cleanup */
    for (s = 0; s < STREAMS; s++)
        free(A[s]);

    return 0;
}

