#include<stdio.h>
int series(int num,int num2,int count)
{
    if(count>0)
    {
        return num*num2 + series(num+3,num2+2,count-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n=2,c,n2=1;
    scanf("%d",&c);
    printf("Sum of the series :%d",series(n,n2,c));
    
    return 0;
}