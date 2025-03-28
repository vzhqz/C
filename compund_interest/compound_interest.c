#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // variable declaration
    float principal = 0.0f;
    float interest_rate = 0.0f;
    int num_of_years = 0;
    int times_compounded = 0;
    char currency = '$';
    float result = 0.00f;

    // clearing the terminal (for windows only)
    system("cls");

    // prompts the user for a principal amount
    printf("Enter the principal amount: %c", currency);
    scanf("%f", &principal);

    // prompts the user for an interest rate
    printf("Enter the interest rate: %%");
    scanf("%f", &interest_rate);
    interest_rate /= 100; // converts received number into a percentage by dividing by 100

    // prompts the user for a number of years
    printf("Enter the number of years: ");
    scanf("%d", &num_of_years);

    // prompts the user for a number of times compounded per year
    printf("Enter the number of times compounded per year: ");
    scanf("%d", &times_compounded);

    /*
    A = P * (1 + r/n)^(tn)
    p = principal
    r = interest rate
    n = number of times compounded
    t = number of years
    */
   // calculating the total amount
    result = principal * (1 + pow((interest_rate / times_compounded), (num_of_years * times_compounded)));
    
    // displaying the total amount
    printf("\nAfter %d years, your total amount will be %c%.2f\n", num_of_years, currency, result);

    return 0;
}