// #include <stdio.h>
// #include <math.h>
// int main() 
// {
//     float floatingNumber;
//     // Input floating-point number from the user
//     scanf("%f", &floatingNumber);
//     // Round the floating-point number to the nearest integer
//     int roundedNumber = round(floatingNumber);
//     // Print the rounded number
//     printf("Rounded to the nearest integer: %d\n", roundedNumber);

//     return 0;
// }
// Not using library function
#include <stdio.h>
int main() 
{
    float floatingNumber;
    int roundedNumber;
    scanf("%f", &floatingNumber);
    // Round the floating-point number to the nearest integer
    if (floatingNumber >= 0) 
    {
        // Add 0.5 before casting to round up
        roundedNumber = (floatingNumber + 0.5);
    } 
    else 
    {
        // Subtract 0.5 before casting to round down
        roundedNumber = (floatingNumber - 0.5);
    }
    // Print the rounded number
    printf("Rounded number: %d\n", roundedNumber);
    return 0;
}

