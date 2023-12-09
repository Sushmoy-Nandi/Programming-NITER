#include<stdio.h>
int main() 
{
    int decimal = 0, binary, base = 1, remainder, num;
    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    num = binary; // Store the original binary number for printing later
    // Convert binary to decimal
    while (binary != 0) 
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * base);
        binary = binary / 10;
        base = base * 2;
    }
    // Print the decimal equivalent
    printf("Decimal equivalent of the binary number %d is: %d\n", num, decimal);
    return 0;
}
