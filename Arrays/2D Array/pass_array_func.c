/* Three ways of accessing 2-D array */

#include <stdio.h>

void display(int *q, int, int);
void show(int (*q)[4], int, int);
void print(int q[][4], int, int);


int main()
{
    int a[3][4] = {
        1,2,3,4,
        11,22,33,44,
        10,20,30,40
    };

    display((int *)a, 3, 4);
    show(a, 3, 4);
    print(a, 3, 4);

    return 0;
}


void display(int *q, int row, int col)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
            printf("%d ", *(q + i*col + j));
        printf("\n");
    }
    printf("\n");
}


void show(int (*q)[4], int row, int col)
{
    int i, j;
    int *p;

    for (i=0; i<row; i++)
    {
        p = (int *)q + i;
        for(j=0; j<col; j++)
            printf("%d ", *(p+j));
        printf("\n");
    }
    printf("\n");
}


void print(int q[][4], int row, int col)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d ", q[i][j]);
        printf("\n");
    }
    printf("\n");
}

