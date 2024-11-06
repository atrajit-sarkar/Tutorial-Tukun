#include <stdio.h>

int main(){
    // A[i][j]-----> A[j][i]

    int m = 2, n = 3;
    float A[m][n];
    float B[m][n];

    // A Matrix is Taken form User.......
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%f", &A[i][j]);
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

    // Displaying The matrix Transpose of A ...
    // Switch in only one place [either switch m and n or i and j ]
    
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%f\t", A[j][i]);
    //         // scanf("%f",&A[i][j]);
    //     }
    //     printf("\n");
    // }


    // printf("_____________________________________\n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%f\t", A[i][j]);
            // scanf("%f",&A[i][j]);
        }
        printf("\n");
    }
    return 0;
}