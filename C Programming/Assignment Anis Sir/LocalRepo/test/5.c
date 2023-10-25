#include <stdio.h>
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
  int medium=mid(a,b,c);
  printf("The medium number is %d\n",medium);
  return 0;
}
