#include<stdio.h>
int series(int num,int num2,int count)
{
    if(count==1)
    {
        return 0;
    }
    else if(count>2)
    {
        return num+num2 + series(num2,num+num2,count-1);;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n=0,c,n2=1;
    scanf("%d",&c);
    printf("Sum of the series :%d",series(n,n2,c));
    return 0;
}


