/* Insertion sort program using C */

#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

void display(int *, int);
void insertion_sort(int *, int);

int main()
{
    int a[SIZE] = {44, 33, 55, 22, 11};
    puts("Array before insertion sort...");
    display(a, SIZE);
    insertion_sort(a, SIZE);
    puts("Array after insertion sort...");
    display(a, SIZE);
    return 0;
}
