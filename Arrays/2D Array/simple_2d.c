/* simple 2D array example */

#include <stdio.h>

int main()
{
    int roll_marks[4][2];

    //get inputs - roll number, marks
    for (int i=0; i<4; i++)
    {
        puts("Enter roll number and marks :");
        scanf("%d %d", &roll_marks[i][0], &roll_marks[i][1]);
    }

    //print that 2D array
    for (int i=0; i<4; i++)
    {
        printf("Roll number = %d Marks = %d\n", roll_marks[i][0], roll_marks[i][1]);
    }
    
    return 0;
}
