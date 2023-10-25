// #include<stdio.h>
// int max(int x,int y)
// {
//     if(x>y)
//     {
//         return x;
//     }
//     else
//     {
//         return y;
//     }
// }
// int main() 
// {
//   int a,b;
//   scanf("%d %d",&a,&b);
//   int m=max(a,b);
//   printf("The maximum number is %d\n",m);
//   return 0;
// }
#include<stdio.h>
int max(int x,int y,int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main() 
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int m=max(a,b,c);
  printf("The maximum number is %d\n",m);
  return 0;
}