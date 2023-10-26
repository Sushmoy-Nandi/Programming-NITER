#include<stdio.h>
int series(int num,int num2,int count)
{
    if(count>0)
    {
        return num*num2*num2 + series(num+1,num2+1,count-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n=1,c,n2=2;
    scanf("%d",&c);
    printf("Sum of the series :%d",series(n,n2,c));
    
    return 0;
}


