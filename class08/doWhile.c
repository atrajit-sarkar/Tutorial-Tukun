#include <stdio.h>

int main()
{
    // int m, n;
    // printf("Enter value of m,n: ");
    // scanf("%d,%d", &m, &n);
    // int i = 1;

    // do
    // {
    //     if (i % m == 0)
    //     {
    //         printf("%d,\t", i);
    //     }

    //     i++;

    // } while (i < n + 1);

    int j = 0;

    do
    {
        printf("%d\n", j);
        j = j - 1;
    } while (j < 0 && j > -5);



    while (j <= 0 && j > -5)
    {
        printf("%d\n", j);
        j = j - 1;
    }

    return 0;
}