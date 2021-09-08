/* #pragma startup and #pragma exit example */

#include <stdio.h>

void fun1();
void fun2();

/* some pragmas are compiler specific and below does not work on MinGW */
#pragma startup fun1
#pragma exit fun2

int main()
{
    puts("inside main");
    return 0;
}

void fun1()
{
    puts("inside fun1");
}

void fun2()
{
    puts("inside fun2");
}