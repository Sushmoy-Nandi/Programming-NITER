#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ar[i]);
    }
    // Remove duplicates
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (ar[i] == ar[j]) 
            {
                // If duplicate found, shift elements to the left
                for (int k = j; k < n - 1; k++) 
                {
                    ar[k] = ar[k + 1];
                }
                n--;  // Decrease array size
                j--;  // Adjust the index as elements have shifted
            }
        }
    }
    // Print the array without duplicates
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
