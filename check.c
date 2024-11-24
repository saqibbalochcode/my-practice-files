#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter b ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("A is greater then B");
    }
    else if (b > a)
    {
        printf("B is greater then A");
    }
    else
    {
        printf("A is equal to B");
    }
    return 0;
}