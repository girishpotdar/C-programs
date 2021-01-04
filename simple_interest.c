/* Program to calculate simple interest */
/* Author: girish date: 02/01/2021 */

#include <stdio.h>

int main()
{
    int p, n;
    float r, si;

    printf("Enter values of p, n, r :");
    scanf("%d %d %f", &p, &n, &r);
    
    //calculate simple interest
    si = p*n*r / 100;

    printf("Simple interest is : %f\n", si);
    return 0;
}