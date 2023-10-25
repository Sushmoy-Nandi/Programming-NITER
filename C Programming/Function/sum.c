#include<stdio.h>
void fun(int a[],int n,int i)
{
    // base case
    if(i==n) return;
    printf("%d ",a[i]);
    fun(a,n,i+1);
}
void sum1(int ar[],int n,int i)
{
    // base case
    if(i==n) return;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    printf("\nsum-%d\n",sum);
    //sum1(ar,n,i+1);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,n,0);
    sum1(a,n,0);
    return 0;
}