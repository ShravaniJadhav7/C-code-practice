#include <stdio.h>
int main()
{
    int marks[2][4] = {{44, 45, 46, 47},
                       {3, 2, 5, 7}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("the value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}
