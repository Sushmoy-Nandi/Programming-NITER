#include <stdio.h>
int main() 
{
    int hexadecimal, binary = 0, place = 1, digit;
    scanf("%X", &hexadecimal);
    // Convert hexadecimal to binary
    while (hexadecimal > 0) {
        digit = hexadecimal % 2;
        binary = binary + (digit * place);
        hexadecimal = hexadecimal / 2;
        place = place * 10;
    }
    printf("Binary representation is %d\n", binary);
    return 0;
}
