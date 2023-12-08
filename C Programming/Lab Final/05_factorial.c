#include<stdio.h>
int fact_num(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else
    {
    int fact_01 = 1;
    for (int i = 1; i <=n; i++) 
    {
        fact_01 = fact_01 * i;
    }
    return fact_01;
    }
}
int main() 
{
    int num;
    scanf("%d",&num);
    if (num < 0)
    {
        printf("Factorial is undefined for negative numbers.\n");
    }
    else
    {
    int fact = fact_num(num);
    printf("The value: %d\n", fact);
    return 0;

    }
  
}
