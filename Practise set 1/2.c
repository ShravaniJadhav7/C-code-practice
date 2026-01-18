// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    int r;
    float area;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
