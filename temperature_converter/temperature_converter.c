#include <stdio.h>
#include <stdlib.h>

int main() {
    // variable declaration
    int user_choice = 0;
    float initial_temperature = 0.0f;
    float converted_temperature = 0.0f;

    // clears the terminal (for windows only)
    system("cls");

    // the title of the program
    printf("  Temperature conversion program\n");
    printf("----------------------------------\n");

    // prompting the user to choose a way of conversion
    printf("1. Convert from Celsius to Fahrenheit.\n");
    printf("2. Convert from Fahrenheit to Celsius.\n");
    printf("Choice: ");
    scanf("%d", &user_choice);

    // clearing the terminal again
    system("cls");

    // the header again
    printf("  Temperature conversion program\n");
    printf("----------------------------------\n");

    // if user chose option 1 ( celsius to fahrenehit )
    if(user_choice == 1) {

        // prompting the user to enter an initial temperature in celsius
        printf("Enter initial temperature in Celsius: ");
        scanf("%f", &initial_temperature);

        // converting from celsius to fahrenheit
        converted_temperature = (initial_temperature * 9/5) + 32;

        // displaying the result
        printf("\n%.1f C = %.1f F\n", initial_temperature, converted_temperature);
    }

    // if the user chose option 2 ( fahrenheit to celsius )
    else if(user_choice == 2) {

        // prompting the user to enter an initial temperature in fahreneheit
        printf("Enter initial temperature in Fahrenheit: ");
        scanf("%f", &initial_temperature);

        // converting from fahrenheit to celsius
        converted_temperature = (initial_temperature - 32) * 5/9;

        // displaying the result
        printf("\n%.1f F = %.1f C\n", initial_temperature, converted_temperature);
    }

    // if the user chose something else
    else {
        printf("Please choose either 1 or 2 next time.");
    }


    return 0;
}