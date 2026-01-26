#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to know it is a leap year or not: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("its not leap year");
    }

    return 0;
}
