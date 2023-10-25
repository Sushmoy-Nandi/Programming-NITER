#include <stdio.h>
int fun(int n)
{
  int reverse=0;
  while(n!=0) 
  {
    reverse=reverse*10 + n%10;
    n/=10;
  }
  return reverse;
}
int main()
{
  int n;
  scanf("%d",&n);
  int rev=fun(n);
  printf("Reversed number: %d\n",rev);
  return 0;
}
