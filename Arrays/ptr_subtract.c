#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *i, *j;
    
    i = &arr[1];
    j = &arr[3];

    printf("j-i = %d \n*j-*i = %d\n", j-i, *j-*i);
    // *j - *i = 6 - 2 = 4
    
    for(int k=0; k<8; k++)
        printf("arr[%d] address = %llu\n", k, &arr[k]);
    return 0;
}