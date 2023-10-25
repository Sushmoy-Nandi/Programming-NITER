#include<stdio.h>
int fun(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}
int fun1(int ar[],int n)
{
    int sum=0,avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    avg=sum/n;
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
  int sum=fun(a,n);
  int avg=fun1(a,n);
  printf("sum-%d\n",sum);
  printf("avg-%d",avg);
    return 0;
}