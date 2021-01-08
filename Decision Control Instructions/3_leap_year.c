/* LetUsC Chapter 3 - Exercise 3 */
/* Input: Integer number
Output: Check whether is is odd/even
/* author: girish date: 07/01/2021 */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%4d", &year);

    if (year%4 == 0) {
        if(year%100 == 0 && year%400 == 0) 
            printf("%d is a leap year!", year);
        else if (year%100 == 0 && year%400 != 0) 
            printf("%d is not a leap year!", year);
        else
            printf("%d is a leap year!", year);
    } 
    else 
        printf("%d is not a leap year.", year);

    return 0;
}