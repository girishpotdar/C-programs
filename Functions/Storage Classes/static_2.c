/* static storage with pointers */

#include <stdio.h>

int *fun();

int main()
{
    int *j;
    j = fun();
    printf("%d\n",*j);
    return 0;
}

int *fun()
{
    static int k=35;
    return (&k);
}