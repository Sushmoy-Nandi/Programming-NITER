#include<stdio.h>
int a_to_the_power_b(int x,int y)
{
    int p;
    p=pow(x,y);
    return p;
}
int main()
{
int a,b;
scanf("%d %d",&a,&b);
int c=a_to_the_power_b(a,b);
printf("result of a^b = %d",c);
return 0;
}