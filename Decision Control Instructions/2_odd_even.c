/* LetUsC Chapter 3 - Exercise 2 */
/* Input: Integer number
Output: Check whether is is odd/even
/* author: girish date: 07/01/2021 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to find out if it is odd/even : ");
    scanf("%d", &num);

    if (num == 1) {
        printf("%d is an odd number.", num);
        return 0;
    }
    

    if (num%2 == 0 || num == 0) {
        printf("%d is an even number.", num);
    } else
    {
        printf("%d is an odd number.", num);
    }

    return 0;
}