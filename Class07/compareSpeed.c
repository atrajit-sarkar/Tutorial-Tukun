#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start_time, end_time;
    char ch = 'e';
    printf("Time code: %c\n", ch);

    start_time = clock();
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
    end_time = clock();

    // Calculate the elapsed time in seconds
    double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the execution time
    printf("Execution time: %.6f seconds\n", elapsed_time);
    
    return 0;
}