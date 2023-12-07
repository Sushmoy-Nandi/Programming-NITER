#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &ar[i]);
    }


    // Output the array information
    // printf("0th index er address - %p\n", &ar[0]);
    // printf("0th index er address - %p\n", ar);


    // printf("0th index er value - %d\n", ar[0]);
    // printf("1st index er value - %d\n", ar[1]);


    //printf("-------------------------------\n");
    int *ptr=ar;
    // printf("0th index er value - %d\n", *ptr);
    // printf("1st index er value - %d\n", *(ptr + 1));
    // printf("2nd index er value - %d\n", *(ptr + 2));
    // printf("3rd index er value - %d\n", *(ptr + 3));
    // printf("4th index er value - %d\n", *(ptr + 4));
    // using loop
    printf("Elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i)); // *(ar + i) is equivalent to ar[i]
    }
    // printf("%d\n", *(1 + ar));
    // printf("%d\n", *(ar + 1));
    // printf("%d\n", *(1 + ar));
    // printf("%d\n", ar[1]);
    // printf("%d\n", 1[ar]);


    return 0;
}
