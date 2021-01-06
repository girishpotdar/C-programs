/* LetUsC Chapter 1 - Exercise 6 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    int C, D, temp;

    printf("Enter value of C and D :");
    scanf("%d %d", &C, &D);

    /*
    // Using third variable
    temp = C;
    C = D;
    D = temp;
    */

    C = C + D;
    D = C - D;
    C = C - D;

    printf("Values of C and D are : %d %d", C, D);
    return 0;

}
