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
  int m=min(a,b,c);
  printf("The minimum number is %d\n",m);
  return 0;
}