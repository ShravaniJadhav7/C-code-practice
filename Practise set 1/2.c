// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    int r, h;
    float area, volume;

    printf("Enter radius: ");
    scanf("%d", &r);
    printf("Enter height: ");
    scanf("%d", &h);

    area = 3.14 * r * r;

    printf("Area of Circle = %.2f\n", area);

    volume = 3.14 * r * r * h;
    printf("Volume of Cylinder = %f", volume);

    return 0;
}
