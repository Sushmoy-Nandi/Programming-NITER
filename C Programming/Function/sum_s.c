#include<stdio.h>
void fun(int n,int i)
{
    // base case
    if(i==n) return;
     for(int i=0;i<n;i++)
    {
        printf("%d ",i);
    }
    fun(n,i+1);
}
int main()
{
    int a;
    scanf("%d",&a);
    fun(a,0);
    return 0;
}