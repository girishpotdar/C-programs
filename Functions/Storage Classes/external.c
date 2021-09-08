/* External storage class example */

#include <stdio.h>

int i;  //default initial value is 0 in external storage class variable
void increment();
void decrement();

int main()
{
    printf("\ni=%d\n", i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}

void increment(){
    i+=1;
    printf("on incrementing i = %d\n", i);
}

void decrement(){
    i-=1;
    printf("on decrementing i = %d\n", i);
}

