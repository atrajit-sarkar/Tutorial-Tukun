#include <stdio.h>

int main()
{
    int m = 2, n = 2;
    float A[m][n];
    float B[m][n];

    // A Matrix is Taken form User.......
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]=\n", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    printf("_____________________________________\n");
    // B Matrix is Taken form User.......

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d]=\n", i, j);
            scanf("%f", &B[i][j]);
        }
    }
    printf("_____________________________________\n");

    // Displaying The matrix A ...
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f\t", A[i][j]);
            // scanf("%f",&A[i][j]);
        }
        printf("\n");
    }
    printf("_____________________________________\n");

    // Displaying The matrix A ...
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f\t", B[i][j]);
            // scanf("%f",&A[i][j]);
        }
        printf("\n");
    }
    printf("_____________________________________\n");

    // Addition of A and B.....
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f \t", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}