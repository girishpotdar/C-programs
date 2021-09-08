/* Array of pointers */

#include <stdio.h>

int main()
{
    int *a[4];  // a is an array of 4 pointer of type integer

    int p=3,q=4,r=5,s=6;

    a[0] = &p;
    a[1] = &q;
    a[2] = &r;
    a[3] = &s;

    for(int i=0; i<4; i++)
        printf("%d\n", a[i]);
    
    return 0;
}
