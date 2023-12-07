#include <stdio.h>
int main() 
{
    int N;
    //printf("Enter the value of N: ");
    scanf("%d", &N);
    long long int sum = 0;
    for (int i = 1; i <= N; i++) 
    {
        if (i % 2 == 0) 
        {
            // If i is even, subtract i^3 from the sum
            sum -= (long long int)i * i * i;
        } 
        else 
        {
            // If i is odd, add i^3 to the sum
            sum += (long long int)i * i * i;
        }
    }
    printf("Sum of the series: %lld\n", sum);
    return 0;
}
