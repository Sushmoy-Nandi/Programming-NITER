#include<stdio.h>
int avg(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=ar[i]+sum;
    }
    int avg=sum/n;
    return avg;
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
    int average=avg(arr,x);
    printf("Average=%d",average);
    return 0;
}