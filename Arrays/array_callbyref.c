/* call by reference for array */

#include <stdio.h>
#include <stdlib.h>

void display(int *);
void show(int **);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i=0; i<5; i++)
        display(&arr[i]);
    
    return 0;
}


void display(int *n)
{
    /* 
            n  = address of array element
            *n = value at that address
    */
    //printf("%d  ", *n);
    show(&n);   // here its pointer to pointer
}

void show(int **x)
{
    printf("%d  ", **x);
}
