// program that receive a 5-digit number and prints it out in large size
/*
e.g. 32145

#####   #####    #  #       #####
    #       #   ##  #       #
    #       #    #  #       #
#####       #    #  #  #    #####
    #   #####    #  #####       #
    #   #        #     #        #
    #   #        #     #        #
#####   #####   ###    #    #####

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char digits[10][9][5] = {
        {
            "#####",
            "#   #",
            "#   #",
            "#   #",
            "#   #",
            "#   #",
            "#   #",
            "#####"

        },
        {
            "  #  ",
            " ##  ",
            "  #  ",
            "  #  ",
            "  #  ",
            "  #  ",
            "  #  ",
            " ### "
        },
        {
            "#####",
            "    #",
            "    #",
            "    #",
            "#####",
            "#    ",
            "#    ",
            "#####"
        },
        {
            "#####",
            "    #",
            "    #",
            "    #",
            "#####",
            "    #",
            "    #",
            "    #",
            "#####"
        }
    };

    int num[5];
    printf("Enter 5 digit number : ");
    for(int i=0; i<5; i++)
        scanf("%d", &num[i]);      // here we can take 5 digit input and then split each digit and use it further
    
    for(int i=0; i<9; i++)      // outer loop to get each row from 3d array
    {
        
    }
    return 0;
}