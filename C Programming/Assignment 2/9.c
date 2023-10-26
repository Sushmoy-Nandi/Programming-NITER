#include<stdio.h>
int series(int num)
{
    if(num>0)
    {
        return ((4*num*num)-1) + series(num-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum of the series :%d",series(n));
    
    return 0;
}

