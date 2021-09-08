/* 2D array is an array of arrays */

#include <stdio.h>

int main()
{
    int a[4][2] = {
        {1100, 1},
        {2200, 2},
        {3300, 3},
        {4400, 4}
    };

    int i;
    for(i=0; i<4; i++) {
        printf("Addesss of %dth 1-D Array : %u\n", i, a[i]);
    }

    return 0;
}
