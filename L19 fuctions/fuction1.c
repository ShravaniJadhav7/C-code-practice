#include <stdio.h>
#include <stdbool.h>
int sumation(int a, float b)
{

    float x = a + b;
    // printf("%d \n", x);
    return x;
}

int main()
{
    int a;
    int b, x;
    // bool c = true;
    a = 100;
    b = 20.30;
    x = sumation(a, b);
    printf("the sum is %f \n", x);
    return 0;
}
