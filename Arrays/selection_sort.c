/* selection sort program using pointers */

#include <stdio.h>
#define SIZE 5

void selection_sort(int *, int);
void display(int *, int);


int main()
{
    int a[SIZE] = {44, 33, 55, 22, 11};
    puts("Array before selection sort : ");
    display(a, SIZE);
    selection_sort(a, SIZE);
    puts("Array after selection sort : ");
    display(&a[0], SIZE);
    return 0;

}

void display(int *array, int size)
{
    int j;
    for (j=0; j<size; j++){
        printf("a[%d] = %d\n", j, *(array+j));
    };
}


void selection_sort(int *array, int size)
{
    int temp, *s, *p;

    if(size < 2) {
        puts("Array is size not greater than 2. Exiting...");
    }
    
    for(int i=0; i<size; i++) {
        s = array + i;  // a pointer pointing to start element of each iteration
        p = s;          // a pointer pointing to each remaining array
        for (int j=i; j<size; j++) {
            p++;
            if (*s > *p){
                temp = *s;
                *s = *p;
                *p = temp;
            }
        }
    }
}
