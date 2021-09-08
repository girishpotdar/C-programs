/* External storage class - example 2 */

#include<stdio.h>

int x=21;

int main()
{
    extern int y;
    printf("%d %d\n", x, y);
    return 0;
}

int y = 30;