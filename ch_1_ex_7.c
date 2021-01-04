/* LetUsC Chapter 1 - Exercise 7 */
/* author: girish date:02/01/2021 */
// CP = ( SP * 100 ) / ( 100 + percentage profit)

#include <stdio.h>

int main()
{
    int total, profit;
    float cp;

    printf("Enter total selling price of 15 items : ");
    scanf("%d", &total);
    printf("Enter total profit %% earned : ");
    scanf("%d", &profit);

    cp = (total * 100) / (100+profit);
    printf("Cost price of each item is : %.2f", cp/15);

    return 0;

}