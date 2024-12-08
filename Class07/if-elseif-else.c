#include <stdio.h>

int main()
{
    char ch = 'e';
    printf("Time code: %c\n", ch);
    if (ch == 'm')
    {
        printf("Good Morning\n");
    }
    else if (ch == 'a')
    {
        printf("Good afternoon\n");
    }
    else
    {
        printf("Good evening\n");
    }

    return 0;
}