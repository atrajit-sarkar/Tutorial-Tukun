#include <stdio.h>

int main()
{
    /*
        find the numbers which are multiple of m from 1..n
    */

    int m, n;
    printf("Enter value of m,n: ");
    scanf("%d,%d", &m, &n);

    for (int i = 1; i < n + 1; i++)
    {
        if (i % m == 0)
        {
            printf("%d,\t", i);
        }
    }

    return 0;
}