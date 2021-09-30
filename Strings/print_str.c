// receive and print string using %s specifier

#include <stdio.h>

int main()
{
    char name[25];

    printf("Enter your name :");
    scanf("%s", name);
    printf("Hello %s!\n", name);
    return 0;
}
