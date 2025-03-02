#include<stdio.h>

int main() { 
    int num1, num2;
    char opr;

    // Read the two integers
    scanf("%d%d", &num1, &num2);

    // Read the operator, and handle any leftover newline character from the previous input
    scanf(" %c", &opr);  // Adding a space before %c to consume any lingering newline

    switch (opr) {
        case '+':
            printf("%d + %d = %d\n", num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
