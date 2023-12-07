#include <stdio.h>
// Function to calculate the factorial of a number
long long int factorial(int n) 
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
    int N;
    //printf("Enter the number of terms (N): ");
    scanf("%d", &N);
    double sum = 0.0;
    for (int i = 1; i <= N; i++) 
    {
        sum += (double)(i * i) / factorial(i);
    }
    printf("Sum of the series: %llf\n", sum);
    return 0;
}
