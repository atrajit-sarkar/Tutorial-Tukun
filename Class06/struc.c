#include <stdio.h>

struct Data
{
    int a;
    float b;
    int array[2];
};

int main()
{
    struct Data x;
    x.a = 10;
    x.b = 10.2;
    x.array[0] = 1;
    x.array[1] = 69;

    printf("%d\n", x.a); // garbage value.....

    return 0;
}