#include <stdio.h>

int main() 
{
    int rows;

    // Input the number of rows from the user
    scanf("%d", &rows);

    // Loop to iterate through each row
    for (int i = 1; i <= rows; i++) {
        // Loop to print spaces before the numbers
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Loop to print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }

        // Loop to print numbers in decreasing order (for the other side of the pyramid)
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
