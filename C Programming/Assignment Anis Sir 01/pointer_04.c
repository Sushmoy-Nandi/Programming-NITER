#include <stdio.h>
int main() 
{
    double num1,num2,product;
    double *ptr1,*ptr2,*ptr_product;
    ptr1=&num1;
    ptr2=&num2;
    ptr_product=&product;
    scanf("%lf %lf",ptr1,ptr2);
    *ptr_product=*ptr1**ptr2;
    printf("Product of %.2lf and %.2lf is: %.2lf\n", *ptr1, *ptr2, *ptr_product);
    return 0;
}
