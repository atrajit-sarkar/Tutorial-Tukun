#include <stdio.h>

int main()
{
    char ch = 'm';
    switch (ch)
    {
    case 'a':
        printf("Good afternoon\n");
        break;
    case 'm':
        printf("Good morning\n");
        break;

    default:
        printf("Good eveing\n");
        break;
    }
    return 0;
}