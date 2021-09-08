/* 3-D array example */

#include <stdio.h>

int main()
{
    int array[3][4][2] = {
        {
            {2,4},
            {7,8},  
            {4,5}, 
            {5,6}
        },

        {
            {3,2}, 
            {2,1}, 
            {6,4}, 
            {9,0}
        },

        {
            {0,8}, 
            {7,6}, 
            {9,8}, 
            {5,4}
        }
    };

    printf("%d", *(*(*(array+2) + 3) + 1) );    // get last element of 3D array
    return 0;
}

/*
a[3][4][1] = 4

a[3]        = *(a+3)
a[3][4]     = *(*(a+3)+4)
a[3][4][1]  = *(*(*(a + 3) + 4) + 1) 

*/
