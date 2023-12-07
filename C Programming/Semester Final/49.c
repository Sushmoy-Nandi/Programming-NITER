#include <stdio.h>
// Recursive function to calculate power
int power(int x, int y) 
{
    if (y == 0) 
    {
        return 1;
    } 
    else 
    {
        return x * power(x, y - 1);
    }
}
int main() 
{
    int x, y;

    // Input values for base (x) and exponent (y)
    scanf("%d %d", &x, &y);
    // Calculate and print the result using the power function
    int result=power(x,y);
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}
