#include<stdio.h>
int fun(int ar[],int n)
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
  printf("Minimum number %d\n",f);
  return 0;
}