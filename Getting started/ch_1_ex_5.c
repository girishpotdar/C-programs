/* LetUsC Chapter 1 - Exercise 5 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    float l, b, r;
    printf("Enter length and breadth of rectangle : ");
    scanf("%f %f", &l, &b);

    printf("\nArea of rectangle : %.2f", l*b);
    printf("\nPerimeter of rectangle : %.2f", 2 * (l+b));

    printf("\nEnter radius of circle : ");
    scanf("%f", &r);

    printf("\nArea of circle : %.2f", 3.14*r*r);
    printf("\nCircumference of circle : %.2f", 2*3.14*r);

}