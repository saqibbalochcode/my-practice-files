#include<stdio.h>
#include<math.h>
int main ()
{
    double a,b,c;
    printf("\t\t\t Find the hypotenuse by entering A and B!!\n");
    printf("Enter A:\n");
    scanf("%lf", &a);
    printf("Enter B:\n");
    scanf("%lf", &b);
    c = sqrt(a*a +b*b);
    printf("C is : %lf", c);
    return 0;
}