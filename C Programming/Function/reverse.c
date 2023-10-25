#include <stdio.h>
int reverse(int n) 
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
  int number;
  scanf("%d",&number);
  int r=reverse(number);
  printf("The reverse number is %d\n",r);
  return 0;
}