#include<stdio.h>
int min(int x,int y,int z)
{
    if(x<y && x<z)
    {
        return x;
    }
    else if(y<x && y<z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int mn=min(a,b,c);
    printf("Minimum: %d",mn);
    return 0;
}