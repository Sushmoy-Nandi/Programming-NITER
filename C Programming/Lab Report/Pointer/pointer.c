#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    printf("The value of x is %d\n", x);
    printf("The address of x is %p\n", &x);
    printf("The value of p is %p\n", p);
    printf("The address of p is %p\n", &p);
    printf("The value of x using p is %d\n", *p);
    return 0;
}
