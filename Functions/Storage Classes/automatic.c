/* Automatic storage class */
/* Storage=Memory , default initial value=garbage value, scope=block of code, life=till control remains in block where var is defined */

#include <stdio.h>

int main()
{
    auto int i, j;
    printf("%d %d\n",i, j);
    return 0;
}