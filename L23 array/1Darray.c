#include <stdio.h>
int main()
{
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d element of the array is %d\n", i, marks[i]);
    }

    // marks[0] = 34;
    // printf("marks of student 1 is %d\n", marks[0]);
    // marks[0] = 454;
    // marks[1] = 34;
    // marks[2] = 24;
    // marks[3] = 24;
    // printf("marks of student 1 is %d\n", marks[0]);
    return 0;
}
