#include<stdio.h>

int main()

{
    int age;

    printf("Enter Your Age \n");
    scanf("%d",&age);
    printf("you entered %d as your age\n", age);
    if (age > 18) { 
    printf("you can vote!");
    }
    return 0;
}