#include<stdio.h>
int sum(int x,int y)
{
   int sum=x+y;
   return sum;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    printf("Sum: %d",s);
    return 0;
}