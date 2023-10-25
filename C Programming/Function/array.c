#include<stdio.h>
int fun(int ar[],int n)
{
  int max=ar[0];
  for(int i=0;i<n;i++) 
  {
    if(ar[i]>max) 
    {
      max=ar[i];
    }
  }
  return max;
}
int fun1(int ar[],int n)
{
  int min=ar[0];
  for(int i=0;i<n;i++) 
  {
    if(ar[i]<min) 
    {
      min=ar[i];
    }
  }
  return min;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for (int i=0;i<n;i++) 
  {
    scanf("%d",&a[i]);
  }
  int f=fun(a,n);
  int f1=fun1(a,n);
  printf("Maximum number %d\n",f);
  printf("Minimum number %d\n",f1);
  return 0;
}