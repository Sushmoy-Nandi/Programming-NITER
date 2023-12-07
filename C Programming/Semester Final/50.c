#include <stdio.h>
// Recursive function to calculate factorial
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() 
{
    int num;
    // Input value for which factorial is to be calculated
    scanf("%d", &num);
    if (num < 0) 
    {
        // Factorial is undefined for negative numbers
        printf("Factorial is undefined for negative numbers.\n");
    } 
    else 
    {
        // Calculate and print the factorial using the factorial function
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    return 0;
}
