#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%.2lf largest",a);
    }
    else if(b>a && b>c)
    {
        printf("%.2lf largest",b);
    }
    else
    {
        printf("%.2lf largest",c);
    }
    return 0;
}