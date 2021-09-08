#include <stdio.h>

int main()
{
    char ch;
    for(ch = 0; ch <= 255; ch++)
        printf("%d %c\n", ch, ch);
    return 0;
}
