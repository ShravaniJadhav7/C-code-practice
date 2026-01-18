#include <stdio.h>
int main()
{
    int num;
    float value;

    printf("Choose conversion:\n");
    printf("1. Km to Miles\n");
    printf("2. Inch to Foot\n");
    printf("3. Cm to Inch\n");
    printf("4. Pound to Kg\n");
    printf("5. Inch to Meter\n");
    printf("enter the number you want to choose for conversion :");
    scanf("%d", &num);

    printf("Please Enter value :");
    scanf("%f", &value);
    switch (num)
    {
        float ans;
    case 1:
        ans = value * 0.6213;
        printf("Km to Miles conversion of %f = %f ", value, ans);
        break;

    case 2:
        ans = value * 100;
        printf("Inch to Foot of %f : %f ", value, ans);
        break;
    case 3:
        printf("Cm to Inch conversion of %f = %f ", value, value * 0.3937);
        break;
    case 4:
        printf("Pound to Kg of %f = %f ", value, value * 0.453);
        break;
    case 5:
        printf("Inch to Meter conversion of %f = %f ", value, value * 0.0254);
        break;
    }

    return 0;
}
