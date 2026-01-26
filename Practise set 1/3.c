// 3. Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit
#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter the value in celcius you want to convert:");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9 / 5) + 32;
    printf("celcius to fahrenheit conversion %f \n", fahrenheit);
    return 0;
}
