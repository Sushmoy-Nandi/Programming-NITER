#include <stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
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
    printf("%d",mid);
    }
   return 0;
}
