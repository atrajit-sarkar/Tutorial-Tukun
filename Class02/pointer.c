#include <stdio.h>

int main()
{
    // 01001010 01011010 01001010 01101010 ------> 122345
    // 01001010 01011010 01001010 01101010 ------> 122349
    // 01001010 01011010 01001010 01101010 ------> 122353

    int num = 10;
    float num1 = 10.1;
    float num2 = 11.3;
    int *num_pointer = &num; // "&" is a address operator
    float *num1_pointer = &num1;
    float *num2_pointer = &num2;

    printf("%d\n", num);
    // Printing Address of variables...........
    printf("%p\n", num_pointer);  //------> address of 10
    printf("%p\n", num1_pointer);
    printf("%p\n", num2_pointer);

    // Printing value of a variable from its address........
    printf("%d\n", *(&num)); // -----> 10
    printf("%d\n", *num_pointer);
    printf("%d\n", &num_pointer);
    // printf("%p\n",(&num_pointer));

    return 0;
}