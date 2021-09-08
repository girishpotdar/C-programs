/* Factorial program using recursion */
#include <stdio.h>

int factorial(int);

int main()
{
    int num, fact;
    printf("Enter a number : \n");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d is : %d", num, fact);
    return 0;
}

int factorial(int x)
{
    if (x == 1)
        return 1;
    else
        x = x * factorial(x-1);
    
    return x;
}
