#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        if(a<b)
        {
            printf("%d is minimum",a);
        }
        printf("%d is maximum",a);
    }
    else if(a<b)
    {
        if(a>b)
        {
            printf("%d is minimum",b);
        }
        printf("%d is maximum",b);  
    }
    return 0;
}