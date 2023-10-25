#include<stdio.h>
void sushmoy(int x,int y)
{
    int s=x+y;
    printf("sum-%d\n",s);
    if(x<y)
    {
        printf("minimum-%d\n",x);
    }
    else
    {
        printf("minimum-%d\n",y);
    }
    if(x>y)
    {
        printf("maximum-%d\n",x);
    }
    else
    {
        printf("maximum-%d\n",y);
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sushmoy(a,b);
    return 0;
}