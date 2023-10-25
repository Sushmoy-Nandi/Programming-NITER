#include<stdio.h>
int min(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
// int main()
// {
//     int m=min(10,20);
//     printf("%d",m);
//     return 0;
// }

//taking input from user
int main() 
{
  int a,b;
  scanf("%d %d",&a,&b);
  int m=min(a,b);
  printf("The minimum number is %d\n",m);
  return 0;
}