/* pass entire array to function using pointer */

#include <stdio.h>

void display(int *, int);

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    display(&arr[0], size);
    return 0;
}

void display(int *num, int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, *num);
        num++;
    }
}
