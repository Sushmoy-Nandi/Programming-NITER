#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);
    // Check if the number is less than 2 (prime numbers start from 2)
    int isPrime = 1;
    if (num < 2) 
    {
        isPrime = 0;
    } 
    else 
    {
        // Check for factors from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) 
        {
            // If the number is divisible by any factor, it's not prime
            if (num % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }
    // Print the result
    if (isPrime) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
