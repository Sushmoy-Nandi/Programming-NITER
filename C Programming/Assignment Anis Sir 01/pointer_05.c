#include <stdio.h>
int main() 
{
    double num1, num2;
    double *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    scanf("%lf %lf",ptr1,ptr2);
    double maximum;
    if (*ptr1 > *ptr2) 
    {
        maximum = *ptr1;
    } 
    else 
    {
        maximum = *ptr2;
    }
    printf("The maximum value between %.2lf and %.2lf is: %.2lf\n", *ptr1, *ptr2, maximum);
    return 0;
}
