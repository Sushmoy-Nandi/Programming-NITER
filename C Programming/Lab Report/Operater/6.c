#include<stdio.h>
int main()
{
    int r;
    float a,pie;
    pie = 3.1416;
    scanf("%d", &r);
    a = pie*r*r;
    printf("Area of the circle is \t %.2f", a);
    return 0;
}