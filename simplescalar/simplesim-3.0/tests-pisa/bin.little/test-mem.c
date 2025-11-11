#include <stdio.h>

#define SIZE 100000
int A[SIZE];

int main()
{
    int i, j;
    int sum = 0;

    for (i = 0; i < SIZE; i++)
        A[i] = i;

    for (j = 0; j < SIZE; j++)
        sum += A[j];

    printf("%d\n", sum);
    return 0;
}

