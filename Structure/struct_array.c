// Array of structures

#include <stdio.h>

void linkfloat();

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter name, price and pages :");
        fflush(stdin);
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    for(i=0; i<5; i++)
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);

    return 0;
}

void linkfloat()
{
    float a=0, *b;
    b = &a;
    a = *b;
}
