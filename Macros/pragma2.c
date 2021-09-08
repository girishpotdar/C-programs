/* pragma warn example */

#include<stdio.h>

#pragma warn -rvl  /* return value */
#pragma warn -par  /* param not used */
#pragma warn -rch  /* unreachable code */

int f1()
{
    int a = 4;
}

int main()
{
    f1();
}
