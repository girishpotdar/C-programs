/* Return more than one value using call by reference method - C Program */

#include <stdio.h>

void area_perimeter(int, float *, float *);

int main()
{
    int radius;
    float area, perimeter;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    area_perimeter(radius, &area, &perimeter);

    printf("Radius = %d\n", radius);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}

/* A mixed call -  passing radius by value, and area/perimeter by reference */
void area_perimeter(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}
