#include<stdio.h>
int main ()
{
    const double PI = 3.14159;
    double radius, circumference, area;
    printf("Enter a radius of the circle\n");
    scanf("%lf", &radius);
    printf("Radius is %lf\n", radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The area is = %lf\n",area);
    printf("The circumference is =%lf\n", circumference);
    return 0;
}
