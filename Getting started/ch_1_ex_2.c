/* LetUsC Chapter 1 - Exercise 1 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    float distance;

    printf("Enter distance between two cities in Kilometers : ");
    scanf("%f", &distance);

    //convert distance into meters
    printf("\nDistance in meters is : %f m", distance*1000);
    printf("\nDistance in centimeters is : %f cm", distance*1000*100);
    printf("\nDistance in inches : %f inches", distance*1000*39.37);

    return 0;
}