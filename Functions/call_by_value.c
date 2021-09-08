/* Call by value - C program */

#include <stdio.h>

void swap_by_value(int x, int y);

int main()
{
    int a=10, b=20;
    swap_by_value(a, b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap_by_value(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d y = %d\n", x, y);
}
