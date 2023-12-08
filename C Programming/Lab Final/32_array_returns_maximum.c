#include<stdio.h>
int max(int ar[],int n)
{
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
    {
        max=ar[i];
    }
    }
    return max;
    
}
int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int mx=max(arr,x);
    printf("Maximum: %d",mx);
    
    return 0;
}