#include <stdio.h>
int digital_sum(int n) 
{
  int sum=0;
  while(n>0) 
  {
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int main() 
{
  int n;
  scanf("%d",&n);
  int sum=digital_sum(n);
  printf("The digital sum is %d\n",sum);
  return 0;
}
