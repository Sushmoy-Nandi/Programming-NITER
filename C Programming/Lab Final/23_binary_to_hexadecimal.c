#include<stdio.h>
int main() 
{
    int n, remainder, sum = 0, m = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    while (n > 0) 
    {
        remainder = n % 10;
        sum = sum + (m * remainder);
        n = n / 10;
        m = m * 2;  // Update m to represent powers of 2
    }
    printf("Hexadecimal number is %X\n", sum);
    return 0;
}
