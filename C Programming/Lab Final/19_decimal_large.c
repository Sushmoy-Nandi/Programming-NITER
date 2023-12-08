#include <stdio.h>
int main() 
{
    double num1, num2, num3, largest;
    // Input three decimal numbers from the user
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    // Assume the first number is the largest initially
    if(num1>num2 && num1>num2)
    {
        printf("%.2lf is largest",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("%.2lf is largest",num2);
    }
    else
    {
        printf("%.2lf is largest",num3);
    }
    return 0;
}
