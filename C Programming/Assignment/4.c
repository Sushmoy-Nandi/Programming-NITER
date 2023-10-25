#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++) 
    {
        sum +=i*i;
    }
    printf("The sum of squares of natural numbers is %d\n",sum);
    return 0;
}
