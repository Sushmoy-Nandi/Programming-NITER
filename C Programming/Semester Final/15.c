#include <stdio.h>
int main()
{
    int num1, num2, x;

    // Prompt the user to enter two numbers
    //printf("Enter num1: ");
    scanf("%d", &num1);
    //printf("Enter num2: ");
    scanf("%d", &num2);

    // Use bitwise operations to perform the addition
    while (num2 != 0)
    {
        // Carry contains the common set bits of num1 and num2
        int carry = num1 & num2;
        // Sum of bits of num1 and num2 where at least one of the bits is not set
        num1 = num1 ^ num2;
        // Carry is shifted by one so that adding it to num1 gives the required sum
        num2 = carry << 1;
    }

    // Store the result in x
    x = num1;

    // Print the result
    printf("x = %d\n", x);

    return 0;
}
