#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd;
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    int lcm=(num1*num2)/gcd;
    printf("%d\n",gcd);
    printf("%d",lcm);

    return 0;
}