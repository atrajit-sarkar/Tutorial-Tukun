#include <stdio.h>

int Tukun()
{
    printf("Hello Tukun\n");
    printf("Hello Tukun1\n");
    printf("Hello Tukun2\n");
    printf("Hello Soutam2\n");
    printf("Hello Somu2\n");
    int a = 1, b = 2;
    int sum = a + b;
    // printf("%d\n",sum);

    // Lot of codes.............
    return sum;
}

void PritingNumber(int a)
{ // f(x,y,z)=x^2+y^2+z^2
    printf("%d\n", a);
}

// Factorial Function does what?....
// f(n)=n!
// f(n)=n!=1*2*3*4*....*n

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

int sumOfFactorials(int a, int b)
{
    return a + b;
}

int main()
{
    int n;
    // int m;
    // int tukun = Tukun();
    printf("Enter n= ");
    scanf("%d", &n);
    // printf("%d\n", sumOfFactorials(f(m), f(n)));

    printf("Factorial of %d = %d\n", n, f(n));
    // printf("Factorial sjdkja of %d = %d\n", n, f(n));
    // printf("Factorial shABXHJBX of %d = %d\n", n, f(n));

    // printf("%d\n", tukun);
    // PritingNumber(tukun);
    // PritingNumber(tukun);

    // printf("%d", n);
    // Tukun();
    // printf("..............\n");
    // Tukun();
    // printf("..............\n");
    // Tukun();

    return 0;
}