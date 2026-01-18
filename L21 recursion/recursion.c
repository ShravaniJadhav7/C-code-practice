#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1; // it returns 1 because factorial of 1 is also 1 and factorial of 0 is 1
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("enter the number you want factorial of \n");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
