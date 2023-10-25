#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=2;i<=n;i+=2) 
    {
        sum +=i;
    }
    printf("The sum of the series is %d\n",sum);
    return 0;
}
