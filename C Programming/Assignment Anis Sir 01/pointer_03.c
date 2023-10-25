#include<stdio.h>
int main() 
{
    int num1, num2, difference;
    int *ptr1, *ptr2, *ptr_difference;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr_difference = &difference;
    scanf("%d %d",ptr1,ptr2);
    *ptr_difference = *ptr1-*ptr2;
    printf("Difference between %d and %d is: %d\n",*ptr1,*ptr2,*ptr_difference);
    return 0;
}
