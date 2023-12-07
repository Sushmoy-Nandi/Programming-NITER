#include <stdio.h>
int main() 
{
    int n = 6;  // Number of terms in the sequence
    int term = 5;  // Initial term in the sequence
    // Loop to print the sequence
    for (int i = 0; i < n; i++) 
    {
        printf("%d", term);
        if(i<5)
        {
            printf(",");
        }
        term *= 5;  // Multiply the current term by 5 to get the next term
    }

    return 0;
}

