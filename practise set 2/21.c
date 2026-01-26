#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    if (num % 97 == 0)
    {
        printf("number is divisible by 97");
    }
    else
    {
        printf("number is not divisible by 97");
    }
    return 0;
}
