#include<stdio.h>
int main()
{
    int c, a=10, b;
    b=++a;
    a=b;
    c=a;
    printf("C is %d", c);  // Change %f to %d
    return 0;
}

