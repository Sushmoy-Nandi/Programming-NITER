#include<stdio.h>
int div(int x,int y)
{
    int div=x/y;
    return div;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float d=div(a,b);
    printf("%.2f",d);
    return 0;
}