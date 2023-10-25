#include<stdio.h>
int main()
{
    int x=100;
    int * ptr = &x;
    printf("x er address - %p\n",&x);
    printf("x er value - %d\n",*ptr);
    return 0;
}