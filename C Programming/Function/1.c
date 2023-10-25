#include<stdio.h>
int sum(int x,int y)
{
   int sum=x+y;
   return sum;
}
int min(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    int m=min(a,b);
    int mx=max(a,b);
    printf("Sum-%d\n",s);
    printf("The minimum number is %d\n",m);
    printf("The maximum number is %d\n",mx);
    return 0;
}