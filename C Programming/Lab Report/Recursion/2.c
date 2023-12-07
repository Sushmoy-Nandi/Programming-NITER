#include <stdio.h>
long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}
int main() 
{
    int num;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is undefined for negative numbers.\n");
    } 
    else 
    {
        long long result = factorial(num);
        printf("Factorial of %d is %lld\n", num, result);
    }
    return 0;
}