#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%.2lf is largest",a);
    }
    else if(b>a && b>c)
    {
        printf("%.2lf is largest",b);
    }
    else
    {
        printf("%.2lf is largest",c);
    }
    return 0;
}