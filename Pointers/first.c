/* Pointers - first program */
#include <stdio.h>

int main()
{
    int i=3;
    int *j;     /* value at address stored by j is an int */
    j = &i;
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of j = %u\n", &j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of j = %u\n", j);
    printf("Value of i = %d\n", *j);
    return 0;
}