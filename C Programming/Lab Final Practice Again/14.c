#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float sum=a+b+c;
    float average=sum/3;
    printf("%.2f",average);
    return 0;
}