#include<stdio.h>
int gcd(int num1,int num2)
{
    int n1=num1,n2=num2;
    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int g_c_d=n1;
    return g_c_d;

}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd_01=gcd(a,b);
    printf("%d",gcd_01);
    
    return 0;
}