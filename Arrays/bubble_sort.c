/* Bubble sort C Program using pointers */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void display(int *, int);
void bubble_sort(int *, int);


int main()
{
    int a[SIZE] = {44, 33, 55, 22, 11};
    puts("Array before bubble sort :");
    display(a, SIZE);
    puts("Sorting array using bubble sort algorithm.......");
    bubble_sort(a, SIZE);
    puts("Array after bubble sort :");
    display(a, SIZE);
    return 0;
}


void display(int *array, int size)
{
    int j;
    for (j=0; j<size; j++){
        printf("a[%d] = %d\n", j, *(array+j));
    };
    printf("\n");
}

void bubble_sort(int *base, int size)
{
    int temp, *p, fChange=0;

    if(size < 2) {
        puts("Array is size not greater than 2. Exiting...");
    }

    for(int i=1; i<size; i++) {
        p = base;  // we need base address of array at every iteration

        for(int j=1; j<size; j++) {
            if (*p > *(p+1)){
                temp = *p;
                *p = *(p+1);
                *(p+1) = temp;
                fChange = 1;
            }
            p++;

            // to avoid uneccessary interations if array is already
            if(fChange == 0){
                printf("Array is already in sorted form. Exiting...");
                exit(0);
            }
        }
    }
}
