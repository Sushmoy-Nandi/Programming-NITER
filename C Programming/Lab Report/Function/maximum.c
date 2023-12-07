#include<stdio.h>
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
    int mx=max(a,b);
    printf("The maximum number is %d\n",mx);
    return 0;
}