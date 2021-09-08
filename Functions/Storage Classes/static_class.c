/* static storage class */

#include <stdio.h>

void increment();

int main()
{
    increment();
    increment();
    increment();
    return 0;
}

void increment()
{
    static int i=1;
    printf("%d\n", i);
    i = i+1;
}