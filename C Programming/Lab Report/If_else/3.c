#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        printf("%d is the minimum number", a);

    }
    else
    {
        printf("%d is the minimum number", b);
    }
    return 0;
}