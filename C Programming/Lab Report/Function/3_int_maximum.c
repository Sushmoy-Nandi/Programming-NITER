#include<stdio.h>
int max(int x,int y,int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
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
  int mx=max(a,b,c);
  printf("The maximum number is %d\n",mx);
  return 0;
}