/* LetUsC Chapter 3 - Exercise 1 */
/* Input: CP and SP of an item
Output: Check whether there is a profit/loss and its percentage
*/
/* author: girish date: 07/01/2021 */

#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter Selling price of an item : ");
    scanf("%f", &sp);
    printf("Enter Cost price of an item : ");
    scanf("%f", &cp);

    if(sp > cp) {
        profit = sp - cp;
        profit = (profit * 100)/cp;
        printf("Profit has been made with %f %%", profit);
    }
    else if(sp < cp) {
        loss = cp - sp;
        loss = (loss*100)/cp;
        printf("Loss happened with %f %%", loss);
    }
    else {
        printf("Item has been saled with no profit no loss!");
    }
    return 0;
}