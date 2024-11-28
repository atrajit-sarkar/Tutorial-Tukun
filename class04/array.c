#include <stdio.h>

int main()
{
    //{1,2,3,A,B,C,M_n,...}
    // Array is a set but set can be infinite but array is always finite.
    // Array is  collection of similar datatypes but set is any collection of well defined datatypes....
    // {1,2,"Atrajit","Hrisav"} it is a set but not array........

    // int A[5]; ////

    // A[0] = 1;
    // A[2] = 1;
    // A[3] = 1;
    // A[4] = 1;
    // A[1] = 1;

    // A[5]=1;

    // printf("%d\n", A[0]);
    // printf("%d\n", A[1]);
    // printf("%d\n", A[2]);
    // printf("%d\n", A[3]);
    // printf("%d\n", A[4]);
    // printf("%d\n",A[5]);

    int n;
    printf("Enter valueof n =");
    scanf("%d", &n); ///// value of n is created or determined....
    int B[n];

    for (int i = 0; i < n; i++)
    {
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += B[i];
    }

    printf("%d\n",sum);

    return 0;
}