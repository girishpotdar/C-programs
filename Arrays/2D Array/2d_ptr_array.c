/* Pointer to 2-D Array */

#include <stdio.h>

int main()
{
    int a[4][2] = {
        {1100, 1},
        {2200, 2},
        {3300, 3},
        {4400, 4}
    };

    int (*p)[2];    //p is a pointer to an array of 2 of integer

    int i, j, *pint;    // pint is a pointer to integer
    for(i=0; i<4; i++) {
        p = &a[i];      // store base address of each row (i.e. array)
        pint = (int *) p;   // typecast "p" (ptr to array of 2 of int) to "pint" (ptr to int)

        for(j=0; j<2; j++) {
            printf("a[%d][%d] = %d\n", i, j, *(pint + j));
        }
    }

    return 0;
}
