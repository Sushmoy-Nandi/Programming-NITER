#include<stdio.h>
int series(int num,int count)
{
    if(count>0)
    {
        return num + series(num+3,count-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n=2,c;
    scanf("%d",&c);
    printf("Sum of the series :%d",series(n,c));
    
    return 0;
}