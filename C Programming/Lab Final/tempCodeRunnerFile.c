int main() {
    int row, col, n;
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        // space printing
        for (col = 1; col <= n - row; col++)
            printf(" ");

        // printing numbers
        for (col = 1; col <= 2*row - 1; col++)
            printf("%d", row);

        printf("\n");
    }

    return 0;
}