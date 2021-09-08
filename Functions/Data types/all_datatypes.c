#include <stdio.h>

int main()
{
    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    short int si;
    unsigned short int usi;
    long int li;
    unsigned long int uli;
    float f;
    double d;
    long double ld;

    /* char */
    printf("Enter two seperate characters : \n");
    scanf("%c %c", &c, &uc);
    printf("Entererd chars = %c %c\n", c, uc);

    /* int */
    printf("Enter two sperate integers : \n");
    scanf("%d %u", &i, &ui);
    printf("Entered integers = %d %u\n", i, ui);

    /* short int */
    printf("Enter two short integers : \n");
    scanf("%d %u", &si, &usi);
    printf("Entered short integers = %d %u\n", si, usi);

    /* long int */
    printf("Enter two long integers : \n");
    scanf("%ld %lu", &li, &uli);
    printf("Entered long integers = %ld %lu\n", li, uli);

    /* float, double, long double */
    printf("Enter a flot, a double and a long double value : \n");
    scanf("%f %lf %Lf", &f, &d, &ld);
    printf("Entered float,double,long double = %f %lf %Lf", f, d, ld);

    return 0;
}