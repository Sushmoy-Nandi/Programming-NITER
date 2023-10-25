#include<stdio.h>
int fun(int ar[],int a)
{
  int sum=0,avg;
  for(int i=0;i<a;i++)
  {
    sum=sum+ar[i];
  }
  avg=sum/a;
  return avg;
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
  int avg=fun(a,n);
  printf("avg-%d",avg);
  return 0;
}