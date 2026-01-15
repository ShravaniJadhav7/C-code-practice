#include<stdio.h>

int main()

{
    int age;

    printf("Enter Your Age:");
    scanf("%d",&age);
    printf("you entered %d as your age\n", age);
    if (age > 18) { 
    printf("you can vote!");
    }
    else if (age < 10) {
    printf("you are not even a teenager");
    }
    else{
        printf("you cannot vote, you are a teenager");
    }
    return 0;
}