#include <stdio.h>
#include <stdlib.h>

int main() {
    // variable declaration
    int user_choice = 0;
    float initial_weight = 0.0f;
    float converted_weight = 0.0f;

    // clear user terminal (for windows only)
    system("cls");

    // title of the program
    printf("  Weight converter program\n");
    printf("----------------------------\n");
    
    // prompting the user to choose a way of conversion
    printf("1. Convert from KG to LBS.\n");
    printf("2. Convert from LBS to KG.\n");
    printf("Choice: ");
    scanf("%d", &user_choice);

    // clear user terminal (for windows only);
    system("cls");

    // the title.. again
    printf("  Weight converter program\n");
    printf("----------------------------\n");

    // if the user chose option 1 ( kg to lbs )
    if(user_choice == 1) {

        // prompting the user to enter an intial weight in kg
        printf("Enter initial weight in KG: ");
        scanf("%f", &initial_weight);

        // converting from kg to lbs ( 1 kg = 2.205 lbs )
        converted_weight = initial_weight * 2.205;

        // displaying the result
        printf("\n%.1f kg = %.1f lbs\n", initial_weight, converted_weight);
    }

    // if user chose option 2 ( lbs to kg )
    else if(user_choice == 2) {
        
        // prompting the user to enter an initial weight in lbs
        printf("Enter initial weight in LBS: ");
        scanf("%f", &initial_weight);

        // converting from lbs to kg ( 1 lbs = 0.453 kg )
        converted_weight = initial_weight / 2.205;

        // displaying the result
        printf("\n%.1f lbs = %.1f kg\n", initial_weight, converted_weight);
    }

    // if the user wrote something else
    else {
        printf("Please choose either 1 or 2 next time.");
    }

    return 0;
}