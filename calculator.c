#include <stdio.h>

int main() {
    int choice;
    float n1, n2, result;

    printf("Calculator\n");
    printf("Enter your choice:\n");
    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    scanf("%d", &choice);

    // Take inputs for the numbers
    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);

    switch (choice) {
    case 1:
        result = n1 + n2;
        printf("Result of %.2f + %.2f is: %.2f\n", n1, n2, result);
        break;
    case 2:
        result = n1 - n2;
        printf("Result of %.2f - %.2f is: %.2f\n", n1, n2, result);
        break;
    case 3:
        result = n1 * n2;
        printf("Result of %.2f * %.2f is: %.2f\n", n1, n2, result);
        break;
    case 4:
        if (n2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = n1 / n2;
            printf("Result of %.2f / %.2f is: %.2f\n", n1, n2, result);
        }
        break;
    default:
        printf("Invalid choice.\n");
    }
    return 0;
}
