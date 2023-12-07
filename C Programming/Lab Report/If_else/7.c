#include<stdio.h>
int main()
{
    double marks;
    scanf("%lf",&marks);
    if(marks<0 || marks>100)
    {
        printf("Enter a valid mark");
    }
    else if(marks >=40)
    {
        printf("Congratulations!!! You have passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}