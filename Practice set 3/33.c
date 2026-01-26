#include <stdio.h>
int main()
{
    int user_amount;
    int ans = 0;
    printf("Enter the user amount: ");
    scanf("%d", &user_amount);
    if (user_amount <= 250000)
    {
        printf("No Tax Needed");
    }
    else if (user_amount > 250000 && user_amount <= 500000)
    {
        ans = (user_amount / 100) * 5;
        printf("User needs to pay %d Rs amount", ans);
    }
    else if (user_amount > 5000000 && user_amount <= 10000000)
    {
        ans = (user_amount / 100) * 20;
    }
    else
    {
        ans = (user_amount / 100) * 30;
        printf("user needs to pay %d Rs amount", ans);
    }

    return 0;
}
