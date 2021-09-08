/* Register storage class example */

#include<stdio.h>

int main()
{
    register int i;
    for(i=1; i<=10; i++)
        printf("%d\n",i);
    return 0;
}