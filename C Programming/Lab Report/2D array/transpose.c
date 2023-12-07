#include<stdio.h>
int main() 
{
    int row, col;
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[col][row];
    for (int i = 0; i < col; i++) 
    {
        for (int j = 0; j < row; j++) 
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix:\n");
    for (int i = 0; i < col; i++) 
    {
        for (int j = 0; j < row; j++) 
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
