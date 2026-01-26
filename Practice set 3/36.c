#include <stdio.h>
int min(int min_number, int number)
{
    if (min_number < number)
    {
        return min_number;
    }
    return number;
}
int main()
{
    int min_number = __INT_MAX__;
    int number;
    // printf("%d\n", &number);
    for (int i = 1; i <= 2; i++)
    {
        printf("please enter %d th number : ", i);
        scanf("%d", &number);
        min_number = min(min_number, number);
    }
    printf("%d", min_number);
}