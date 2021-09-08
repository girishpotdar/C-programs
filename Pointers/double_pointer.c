/* Pointers - first program */
#include <stdio.h>

int main()
{
    int i=3;
    int *j;     /* value at address stored by j is an int i.e. A pointer to an int / Integer pointer*/
    int **k;    /* A pointer pointing another pointer */
    j = &i;
    k = &j;
    printf("Address of i = %u\n", &i);  /* Addresses are always a whole numbers so printed using unsigned int %u */
    printf("Address of i = %u\n", j);
    printf("Address of i = %u\n", *k);
    printf("Address of j = %u\n", k);
    printf("Address of j = %u\n", &j);
    printf("Address of k = %u\n", &k);
    printf("Value of j = %u\n", j);
    printf("Value of k = %u\n", k);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);
    return 0;
}