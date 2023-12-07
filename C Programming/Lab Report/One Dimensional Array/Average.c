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
    int sum=0,average;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    average=sum/n;
        printf("Average of the array: %d",average);
    return 0;
}