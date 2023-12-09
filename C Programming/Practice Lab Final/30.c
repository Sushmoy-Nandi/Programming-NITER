#include<stdio.h>
    void gcd(int num1,int num2)
    {
        if(num1<0 || num2<0)
        {
            printf("Please Enter a positive number");
        }
        while(num1 != num2)
        {
            if(num1>num2)
            {
                num1-=num2;
            }
            else
            {
                num2-=num1;
            }
        }
        printf("GCD: %d ",num1);
    }
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
}