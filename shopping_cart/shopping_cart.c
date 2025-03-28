#include <stdio.h>
#include <stdlib.h>

int main() {
    // variable declaration
    char item[20] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float tax = 0.05; // 5%

    // result variables declaration
    float result = 0.0f;
    float result_after_tax = 0.0f;

    // to clear the terminal
    system("cls");

    // asking the user for the item
    printf("What item would you like to buy? ");
    scanf("%s", item);

    // asking the user for the price for each item
    printf("What is the price for each %s? $", item);
    scanf("%f", &price);

    // asking the user for the quantity for each item
    printf("How many %s/s would you like? ", item);
    scanf(" %d", &quantity);

    // calculating the result (with tax ofc)
    result = quantity * price;
    result_after_tax = (result * tax) + result;

    // displaying the result
    printf("\nYou have brought %d %s/s for %.2f each\n", quantity, item, price);
    printf("Your total is %c%.2f before tax\n", currency, result);
    printf("Your total is %c%.2f after tax\n", currency, result_after_tax);

    return 0;
}