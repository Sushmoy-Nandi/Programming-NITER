#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) 
{
    if (num < 2) 
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    int rows;
    // User input: number of rows for the prime number triangle
    printf("Enter the number of rows for the prime number triangle: ");
    scanf("%d", &rows);
    int primeCount = 2;
    // Loop to generate the prime number triangle
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            // Find and print the next prime number
            while (!isPrime(primeCount)) 
            {
                primeCount++;
            }
            printf("%d ", primeCount);
            primeCount++;
        }
        printf("\n");
    }
    return 0;
}
