/* Multi-line macro example */

#include <stdio.h>

#define HLINE for(i=0; i<79; i++) \
                  printf("%c", 196);

int main()
{
    int i;
    
    HLINE

    puts("Execution finished");
}
