/* Pointer arithmatic example */
#include <stdio.h>

int main()
{
    int i=3, *x;
    float f=3.15, *y;
    char c='a', *z;

    printf("Value of i = %d\n", i);
    printf("Value of f = %f\n", f);
    printf("Value of c = %c\n", c);

    x = &i;
    y = &f;
    z = &c;

    printf("Original address in x = %llu\n", x);
    printf("Original address in y = %llu\n", y);
    printf("Original address in z = %llu\n", z);

    // so address++ means address = old address + sizeof(datatype)
    x++;
    y++;
    z++;   

    printf("New address in x = %llu\n", x);
    printf("New address in y = %llu\n", y);
    printf("New address in z = %llu\n", z);

    return 0;
}
