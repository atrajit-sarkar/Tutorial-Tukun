#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n); // user writes n=10, then scanf does *(&n)=10
    int sum = 0;

    for (int i = 1; i < n + 1; i++) // i=i+1
    {
        sum += i; // short form of sum = sum + i
    }
    
    printf("%d\n", sum);

    return 0;
}