#include <stdio.h>
int main()
{
    int num, i = 10;
    printf("enter the number you wanyt to make multiplication table of :");
    scanf("%d", &num);

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("entered number %d * %d = %d \n", num, i, num * i);
    // }
    while (i >= 1)
    {
        printf("entered number %d * %d = %d \n", num, i, num * i);
        i = i - 2;
    }

    return 0;
}
