#include <stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;

    a = 10;
    b = 77;
    // c = sum(a, b);
    // printstar(7)
    c = takenumber();
    printf("the sum entered is  %d \n", c);
    return 0;
}