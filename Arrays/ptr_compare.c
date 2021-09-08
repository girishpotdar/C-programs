/* Pointer comparison */

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int *j, *k;

    j = &arr[4];
    k = (arr + 4);

    if (j == k)
        puts("Two pointers pointing to the same location");
    else
        puts("Two pointers are not pointing to same location");
    
    return 0;
}
 