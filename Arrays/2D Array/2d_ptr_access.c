/* 2D array access using pointer notation */

#include <stdio.h>

int main()
{
    int a[4][2] = {
        {1100, 1},
        {2200, 2},
        {3300, 3},
        {4400, 4}
    };

    int i, j;
    for(i=0; i<4; i++) {
        for(j=0; j<2; j++){
            printf("a[%d][%d] = %d", i, j, *(*(a+i) + j));
        }
    }

    return 0;
}
