#include <stdio.h>
int main() 
{
   int i,j,rows;
   scanf("%d",&rows);
   for(i=1;i<=rows;i++) 
   {
      for(j=2;j<=i+2;j++) 
      {
        printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}
