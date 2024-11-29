#include <stdio.h>

int main()
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // printf("Addition is : %d\n",result[0][0]);
    // printf("Addition is : %d\n",result[0][1]);
    // printf("Addition is : %d\n",result[1][0]);
    // printf("Addition is : %d\n",result[1][1]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}