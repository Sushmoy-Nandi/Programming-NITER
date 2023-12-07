#include <stdio.h>
#define PI 3.14159
double area_circle(double p)
{
double result = PI*p*p;
return result;
}
int main()
{
double radius, area;
scanf("%lf", &radius);
area = area_circle(radius);
printf("Area of a circle = %.2f ",area);
return 0;
}