/* Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest. */

#include <stdio.h>
int main()
{
    int principal, years, SI;
    float rate;

    printf("Enter the values of principal, years, rate:");
    scanf("%d %d %f", &principal, &years, &rate);

    SI = principal * years * rate;
    printf("Simple Intreset = %d \n ", SI);
    return 0;
}
