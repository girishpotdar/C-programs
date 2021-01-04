/* LetUsC Chapter 1 - Exercise 1 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    int base_sal;
    float hra;
    float dearness;
    float gross_sal;

    printf("Enter Ramesh's basic salary : ");
    scanf("%d", &base_sal);

    //Calulate dearness allowance which is 40% of basic salary
    dearness = (base_sal/100) * 40;
    printf("Dearness allowance of Ramesh is : %f", dearness);

    //HRA 20% of base salary
    hra = (base_sal/100) * 20;
    printf("House rent allowane of Ramesh is : %f", hra);

    gross_sal = base_sal + dearness + hra;
    printf("Gross salary of Ramesh is : %f", gross_sal);

    return 0;
}