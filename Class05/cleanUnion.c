#include <stdio.h>

union Data
{
    int a;
    float b;
    int array[2];
};

int main()
{
    union Data x;
    x.a = 10;
    printf("%d\n", x.a);

    x.b = 11.2;
    printf("%f\n", x.b);

    x.array[0] = 1;
    printf("%d\n", x.array[0]);

    x.array[1] = 5;
    printf("%d\n", x.array[1]);

    return 0;
}