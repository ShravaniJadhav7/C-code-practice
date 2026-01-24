#include <stdio.h>
int main()
{
    printf("lets learn pointer \n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("the value of a is %d \n", *ptra);
    printf("the address of pointer is %p \n", &ptra);
    printf("the address of some grabage pointer is %p \n", ptr2);
    return 0;
}
