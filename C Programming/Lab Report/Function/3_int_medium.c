#include<stdio.h>
int mid(int a,int b,int c) 
{
  int mid;
  if (a<=b) 
  {
    if(b<=c) 
    {
      mid=b;
    } 
    else if(a<=c) 
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
  int x,y,z;
  scanf("%d %d %d",&x,&y,&z);
  int medium=mid(x,y,z);
  printf("The medium number is %d\n",medium);
  return 0;
}