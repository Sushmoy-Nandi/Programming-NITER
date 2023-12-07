#include <stdio.h>
double area_rectangle(double p, double q)
{
double result = p*q;
return result;
}
int main()
{
double length, width, area;
scanf("%lf %lf", &length,&width);
area = area_rectangle(length, width);
printf("Area of rectangle = %.2f sq. units ", area);
return 0;
}