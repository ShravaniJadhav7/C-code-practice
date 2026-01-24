#include <stdio.h>
int main()
{
    int arr[] = {121, 34, 56, 78, 89};
    printf("the first position of the array: %d \n", &arr[0]);
    printf("the second position of the array: %d \n", arr[1]);
    printf("the third position of the array: %d \n", &arr[2]);
    printf("the fourth position of the array: %d \n", arr[3]);
    printf("the fifth position of the array: %d \n", arr + 1);

    printf("the value of address of first position of the array: %d \n", *(&arr[0]));
    printf("the value of address of the second position of the array: %d \n", arr[1]);
    printf("the value of address of the third position of the array: %d \n", *(&arr[2]));
    printf("the value of address of the fourth position of the array: %d \n", *(&arr[3]));
    printf("the value of address of the fifth position of the array: %d \n", *(&arr + 1));
    return 0;
}
