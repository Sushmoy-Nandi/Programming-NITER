#include<stdio.h>
int fact(int n)
{
    int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto= facto*i;
    }
    return facto;
}
int main()
{
    int fac;
    scanf("%d",&fac);
    int factorial=fact(fac);
    printf("%d",factorial);
    return 0;
}