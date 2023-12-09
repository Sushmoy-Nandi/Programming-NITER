#include<stdio.h>
int fact(int x)
{
    int fact_01=1;
    for(int i=1;i<=x;i++)
    {
        fact_01=fact_01*i;
    }
    return fact_01;
}
int main()
{
    int n;
    scanf("%d",&n);
    int factorial=fact(n);
    printf("%d",factorial);
    
    return 0;
}