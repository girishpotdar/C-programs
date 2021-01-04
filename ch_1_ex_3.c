/* LetUsC Chapter 1 - Exercise 3 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    int p,c,m,b,e, total;  // Subjects physics, chemisty, maths, biology, english
    float percentage;

    printf("Enter marks of 5 subjects physics, chemisty, maths, biology, english : ");
    scanf("%d %d %d %d %d", &p, &c, &m, &b, &e);
    total = p + c + m + b + e;
    
    // aggregate marks
    printf("\nAggregate marks of student is : %d ", total/5);

    // Percentage marks
    percentage = (float)total / 500 * 100.0;
    printf("\nPercentage marks of student is : %f %", percentage);


    return 0;
}