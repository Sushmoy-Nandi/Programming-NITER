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
    int max=ar[0];
    for(int i=0;i<n;i++) 
    {
        if(ar[i]>max) 
        {
            max=ar[i];
        }
    }
    printf("Maximum: %d ",max);

    return 0;
}