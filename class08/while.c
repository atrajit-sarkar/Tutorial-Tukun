#include <stdio.h>

int main()
{

    /*
        find the numbers which are multiple of m from 1..n
    */

    int m, n;
    printf("Enter value of m,n: ");
    scanf("%d,%d", &m, &n);
    int i = 1;

    while (i < n + 1)
    {
        if (i % m == 0)
        {
            printf("%d,\t", i);
        }
        i++; // i=i+1;
    }

    return 0;
}