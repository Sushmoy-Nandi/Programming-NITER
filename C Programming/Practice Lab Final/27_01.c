#include<stdio.h>
#define PI 3.14159
double circle_area(double r)
{
    double area;
    area=PI*r*r;
    return area;
}
int main()
{
    double n;
    scanf("%lf",&n);
    double circleArea=circle_area(n);
    printf("%.2lf",circleArea);    
    return 0;
}