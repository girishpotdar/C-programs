/* Array of pointers containing address of other array */

#include <stdio.h>

int main()
{
    int a[] = {10,20,30,40,50};

    int *p[] = {a, a+1, a+2, a+3, a+4};

    printf("%u %u %d\n", p, *p, *(*p));

    return 0;

}
