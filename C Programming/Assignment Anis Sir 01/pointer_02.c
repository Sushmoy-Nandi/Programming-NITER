#include <stdio.h>
int main() 
{
    int num1,num2,sum;
    int *ptr1,*ptr2,*ptr_sum;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr_sum = &sum;
    scanf("%d %d",ptr1,ptr2);
    *ptr_sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is: %d\n",*ptr1,*ptr2,*ptr_sum);
    return 0;
}
