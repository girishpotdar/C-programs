/* print an array using pointer */

#include <stdio.h>

int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    int i, *j;

    j = &arr[0];

    for (i = 0; i < 5; ++i)
    {
        printf("arr[%d] = %d\n", i, *j);
        j++;
    }

    return 0;
}
