#include <stdio.h>

int main()
{
    int num = 1;
    int *ptr = &num;

    // Forward Process.........
    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%d\n", &num);

    // BackProcess.............
    printf("%d\n", *ptr);

    // Questions.........
    printf("%d\n", *(&(*(&num))));
    int n=5;

    printf("The number is= \n");
    scanf("%d", &n);
    printf("%d\n", n);

    return 0;
}