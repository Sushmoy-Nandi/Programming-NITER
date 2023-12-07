#include <stdio.h>

int main() {
    int dividend = 10;
    int divisor = 3;
    int result;

    result = dividend % divisor;

    printf("The remainder of %d divided by %d is %d\n", dividend, divisor, result);

    return 0;
}