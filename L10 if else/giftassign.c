#include <stdio.h>
int main()

{
    char sub;
    char s = 's';
    char m = 'm';
    char b = 'b';

    printf("tell me which exam do you passed?\n");
    printf("Enter s for science m for maths b for both:");
    scanf("%c", &sub);

    printf("you entered %c as your \n", sub);

    if (sub == s)
    {
        printf("Congratulations you got 15 gifts");
    }
    else if (sub == m)
    {
        printf("Congratulations you got 15 gifts");
    }
    else if (sub == b)
    {
        printf("Many more Congratulations \n You got 45 gifts");
    }
    else
    {
        printf("you failed both exam \n No worries, Next time better luck");
    }
    return 0;
}