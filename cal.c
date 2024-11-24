#include<stdio.h>

int main()
{
int choice;
float num1,num2,result;
printf("\t\t\tCALCULATOR\t\t\t\n\n");
printf("ENTER YOUR CHOICE:\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n\n");
scanf("%d",&choice);

printf("Enter First Number:\n");
scanf("%f",&num1);
printf("Enter Second Number:\n");
scanf("%f",&num2);

switch(choice)
{
    case 1:
     result=num1+num2;
     {
        printf("Result of %f and %f is =\t%f",num1,num2,result);
     }
     break;
     case 2:
     result=num1-num2;
     {
        printf("Result of %f and %f is =\t%f",num1,num2,result);
     }
     break;
     case 3:
     result=num1*num2;
     {
        printf("Result of %f and %f is =\t%f",num1,num2,result);
     }
     break;
     case 4:
     result=num1/num2;
     if(num2==0)
     {
        printf("math ka sense nahi hai apko");
     }
     else
     {
        printf("Result of %f and %f is =\t%f",num1,num2,result);
     }
    return 0;

}}