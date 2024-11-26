int f(int n)
{
    if (n == 0)
    {
        return 1729;
    }

    int m = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }

    return m;
}

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n= ");
    scanf("%d", &n);

    printf("Factorial of %d = %d\n", n, f(n));
    return 0;
}