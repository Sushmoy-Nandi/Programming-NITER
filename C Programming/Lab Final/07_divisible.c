#include <stdio.h> // Include the standard input/output header file.
int main()
{
   int i, sum=0; // Declare variables for iteration and sum.

   printf("Numbers between 100 and 200, divisible by 9 : \n"); // Print a message to indicate the output format.

   for(i=101; i<200; i++) // Loop through numbers from 101 to 199.
   {
     if(i%9==0) // Check if the current number is divisible by 9.
     {
       printf("%d ", i); // Print the number with formatting.
       sum += i; // Add the divisible number to the sum.
     }
   }

   printf("\n\nThe sum : %d \n", sum); // Print the total sum of divisible numbers.
    return 0;  // Indicate that the program has executed successfully.
}
