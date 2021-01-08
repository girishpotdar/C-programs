/* LetUsC Chapter 3 - Exercise 4 */
/* Input: A year number between 1900 to 2099
Output: According to Gregorian calendar, find out what is the day on 1st January of this year
/* author: girish date: 07/01/2021 */

#include  <stdio.h>

int main()
{
    int year, leap=0, base_year=1900, total_days=0, diff=0, day=0;
    printf("Enter the year between 1900 - 2099 : ");
    scanf("%4d", &year);

    diff = year - base_year;

    while(base_year < year)  
    {  
        if(base_year % 100 == 0 && base_year % 400 == 0) 
            leap ++;
        else  
        {  
            if(base_year % 4 == 0)   
                leap++;
        }  
        base_year++;  
    }

    total_days = (diff - leap) * 365 + leap * 366;  
    day = total_days % 7; 
    printf("The day on 1st January is %d was ", year);

    switch(day)  
    {  
        case 0: printf("Monday.\n");  
                break;  
        case 1: printf("Tuesday.\n");  
                break;  
        case 2: printf("Wednesday.\n");  
                break;  
        case 3: printf("Thursday.\n");  
                break;  
        case 4: printf("Friday.\n");  
                break;  
        case 5: printf("Saturday.\n");  
                break;  
        case 6: printf("Sunday.\n");  
                break;  
    }  
  
  
    
    return 0;
}