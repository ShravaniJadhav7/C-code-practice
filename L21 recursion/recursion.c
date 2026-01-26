#include <stdio.h>

int factorial(int number)
{
    printf("Function called with number = %d\n", number);

    if (number == 0 || number == 1)
    {
        printf("Base condition reached, returning 1\n\n");
        return 1;
    }

    int result = number * factorial(number - 1);
    printf("Returning %d for number = %d\n\n", result, number);

    return result;
}

int main()
{
    int num;
    printf("Enter the number you want factorial of:\n");
    scanf("%d", &num);

    int ans = factorial(num);
    printf("Final Result: Factorial of %d is %d\n", num, ans);

    return 0;
}
