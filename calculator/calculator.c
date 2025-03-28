#include <stdio.h>
#include <stdlib.h>

int main() {
    // variable declaration
    float num1 = 0.0f;
    float num2 = 0.0f;
    char operator = '\0';
    float result = 0.0f;

    // clears the terminal (for windows only)
    system("cls");

    // the title of the program
    printf("  Calculator Program\n");
    printf("----------------------\n");

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator: ");
    scanf("%c", &operator);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    printf("\n----------------------\n");
    
    switch(operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': result = num1 / num2; break;
        default: printf("Invalid operator."); break;
    }

    printf("%.1f %c %.1f = %.1f", num1, operator, num2, result);

    return 0;
}