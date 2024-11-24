#include<stdio.h>
int main ()
{
    int num;
    printf("Enter your Numbers:\n");
    scanf("%d", &num);
    if (num >= 90){
        printf("A\n");
    }
    else if (num >=80){
        printf("B\n");
    }
    else if (num >= 70){
        printf("C\n");
    }
    else if (num >= 60){
        printf("D");
    }
    else if (num < 60) {
        printf("F\n");
    }
    else
    {
        printf("Tu sab se wada zazil a kainat da");
    }
return 0;
}