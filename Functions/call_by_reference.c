/* Call by reference - C program */
#include <stdio.h>

void swap_by_ref(int *, int *);

int main()
{
    int a=10, b=20;
    swap_by_ref(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap_by_ref(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}