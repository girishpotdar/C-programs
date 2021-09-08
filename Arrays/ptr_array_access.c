/* different ways to access an array element in C */

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    for (i=0; i<5; i++) {
        printf("address = %u ", &arr[i]);
        printf("element = %d %d %d %d\n",  arr[i], *(arr+i), i[arr], *(i+arr));
    }
    return 0;
}
