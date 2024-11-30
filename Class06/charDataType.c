#include <stdio.h>

int main()
{
    char a;
    a = ' ';
    // "Atrajit123@#"
    char str[50] = "Atrajit123@#";
    // char str[50] = {'A','t','r'}; // original rule........
    // str[0] = 'A';
    // str[1] = 't';
    printf("%s\n",str); // short.........

    // for (int i = 0; i < 50; i++)
    // {
    //     printf("%c",str[i]);
    // }
    

    printf("%c\n", a);
    return 0;
}