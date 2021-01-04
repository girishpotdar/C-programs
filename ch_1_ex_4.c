/* LetUsC Chapter 1 - Exercise 4 */
/* author: girish date:02/01/2021 */

#include <stdio.h>

int main()
{
    int far;
    float degree;

    printf("Enter City's temperature in Fahrenheit : ");
    scanf("%d", &far);

    //Far to Degree conversion
    degree = (far-32) * 0.55;   // (FAR-32) * (5/9)
    printf("Temperature in celcius is : %.2f °C", degree);

    return 0;
}