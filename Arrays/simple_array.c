/*  Simple array program  to calculate average marks of 5 subjects */

#include <stdio.h>

int main()
{
    int sum=0, avg;
    int marks[5];

    for (int i=0; i<5; ++i)
    {
        puts("Enter marks : ");
        scanf("%d", &marks[i]);
    }

    // calc sum 
    for (int i=0; i<5; i++)
        sum = sum + marks[i];
    
    avg = sum/5;
    printf("sum = %d\n", sum);
    printf("Average marks = %d", avg);
    return 0;
}