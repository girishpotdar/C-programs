/* Triple pointer program */
#include <stdio.h>

int main()
{
    int i=3, *j, **k, ***l;
    j = &i;     /* Integer pointer */
    k = &j;     /* Pointer to an integer pointer */
    l = &k;     /* Pointer to pointer to pointer */

    /* Print address of i */
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of i = %u\n", *k);
    printf("Address of i = %u\n", **l);

    /* Print address of j */
    printf("Address of j = %u\n", &j);
    printf("Address of j = %u\n", k);
    printf("Address of j = %u\n", *l); 

    /* Print address of k */
    printf("Address of k = %u\n", &k);
    printf("Address of k = %u\n", l);

    /* Print address of l */
    printf("Address of l = %u\n", &l);
    
    /* Print value of i */
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);
    printf("Value of i = %d\n", ***l);

    /* Print value of j :- It will show address of i */
    printf("Value of j = %u\n", j);
    printf("Value of j = %u\n", *(&j));
    printf("Value of j = %u\n", *k);
    printf("Value of j = %u\n", **l);

    /* Print value of k :- it will show address of j */
    printf("Value of k = %u\n", k);
    printf("Value of k = %u\n", *(&k));
    printf("Value of k = %u\n", *l);

    /* Print value of l :- it will show address of k */
    printf("Value of l = %u\n", l);
    printf("Value of l = %u\n", *(&l));

    return 0;

}

/* OUTPUT 

Address of i = 6422300
Address of i = 6422300
Address of i = 6422300
Address of i = 6422300
Address of j = 6422296
Address of j = 6422296
Address of j = 6422296
Address of k = 6422292
Address of k = 6422292
Address of l = 6422288
Value of i = 3
Value of i = 3
Value of i = 3
Value of i = 3
Value of i = 3
Value of j = 6422300
Value of j = 6422300
Value of j = 6422300
Value of j = 6422300
Value of k = 6422296
Value of k = 6422296
Value of k = 6422296
Value of l = 6422292
Value of l = 6422292

*/