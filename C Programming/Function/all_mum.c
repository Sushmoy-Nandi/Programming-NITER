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
int mid(int a,int b,int c) 
{
  int mid;
  if (a<=b) 
  {
    if(b<=c) 
    {
      mid=b;
    } 
  } 
  else 
  {
    if(a<=c) 
    {
      mid=a;
    } 
    else 
    {
      mid=c;
    }
  }
  return mid;
}
int main() 
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int m=min(a,b,c);
  int medium=mid(a,b,c);
  int mx=max(a,b,c);
  printf("The minimum number is %d\n",m);
  printf("The medium number is %d\n",medium);
  printf("The maximum number is %d\n",mx);
  return 0;
}