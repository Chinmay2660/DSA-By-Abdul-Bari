#include <stdio.h>

int main()
{
    int A[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%u\n", &A[i]);
    }
    // int B[5] = {1, 2, 3, 4, 5};
    // int C[10] = {2, 4, 6};
    // int D[5] = 0;
    // int E[] = {1, 2, 3, 4, 5};

    // return 0;
}