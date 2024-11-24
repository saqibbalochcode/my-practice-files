#include<stdio.h>
int main ()
{

   /* local variable definition */ 
   char grade = 'B';
   printf("enter your grade:\n");
   scanf("%c", &grade);
   switch(grade) 
   { 
   case 'A':
   case 'a' : 
      printf("Excellent!\n" ); 
      break; 
   case 'B' :
   case 'b' :
   case 'C' : 
   case 'c' :
      printf("Well done\n" ); 
      break; 
   case 'D' : 
   case 'd' :
    printf("You passed\n" ); 
      break;    
   case 'F' : 
   case 'f' :
      printf("Better try again\n" ); 
      break; 
   default : 
      printf("Invalid grade\n" ); 
   } 
   printf("Your grade is  %c\n", grade ); 
   return 0;
} 
