#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int med=ar[n/2];
   for (int i = 0; i < n - 1; i++) 
   {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if(ar[j]>ar[j + 1]) 
            {
                int temp=ar[j];
                ar[j]=ar[j + 1];
                ar[j + 1]=temp;
            }
        }
   }
   printf("%d ",med);

    return 0;
}