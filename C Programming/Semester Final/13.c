#include <stdio.h>
int main() 
{
//  int rows, cols;
//  //printf("Enter the number of rows: ");
//  scanf("%d", &rows);
//  //printf("Enter the number of columns: ");
//  scanf("%d", &cols);
 int rows = 5, cols = 5;
 for (int i = 1; i <= rows; i++) 
 {
 for (int j = 1; j <= cols; j++) 
 {
 if (i == rows / 2 + 1 || j == cols / 2 + 1) 
 {
 printf("0 ");
 } 
 else 
 {
 printf("1 ");
 }
 }
 printf("\n");
 }
 return 0;
}

// #include <stdio.h>

// int main() {
//     int rows = 5, cols = 5;

//     // Loop through each row
//     for (int i = 1; i <= rows; i++) {
        
//         // Loop through each column
//         for (int j = 1; j <= cols; j++) {
            
//             // Check if the current position is in the center row or center column
//             if (i == rows / 2 + 1 || j == cols / 2 + 1) {
//                 // If in the center, print "0"
//                 printf("0 ");
//             } else {
//                 // If not in the center, print "1"
//                 printf("1 ");
//             }
//         }
        
//         // Move to the next line after completing a row
//         printf("\n");
//     }

//     return 0;
// }
