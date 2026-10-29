/*
Name: Eric Daugherty
Date: 10/16/2026
Purpose: A simple program that takes a number from the user and converts 
it to roman numerals. 
*/
#include <stdio.h>

int main(void)
{
    // Variable that holds the users input
    int num;
    // Numbers that will be used to convert the users input into 
    // roman numerals that coresponds to the romanNum array below.
    int numbers[] = {
        1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // Array that holds the roman numerals that coresponds to the numbers.
    char *romanNum[] = {
        "M", "CM", "DCCC", "DCC", "DC", "D", "CD", "CCC", "CC", "C", "XC", "LXXX", "LXX", "LX", "L", "XL", "XXX", "XX", "X", "IX", "VIII", "VII", "VI", "V", "IV", "III", "II", "I"};
    // Variable that holds the users choice to continue or not
    char choice;
    // Do while loop that allows the user to continue to enter numbers until they 
    // choose not to.
    do
    {   
        // Prompts the user to enter a number between 1 and 1000
        printf("Please enter a number 1 - 1000: ");
        // Takes the users input and stores it in the variable num
        scanf("%d", &num);
        // An if statement to check if the number is valid or not by
        // stoping the user from entering a number outside the specified range.
        if (num <= 0 || num > 1000)
        {
            printf("Invalid number!\n");
        }
        else
        {   
            printf("The roman numeral for %d is: ", num);
            // A for loop that iterates through the numbers of the arrays.
            for (int i = 0; i < 28; i++)
            {
                // A while loop that checks if the number is greater than or equal to the
                // number in the numbers array.
                while (num >= numbers[i])
                {
                    // Prints the roman numeral that corresponds to the number in the 
                    //numbers array.
                    printf("%s", romanNum[i]);
                    // Subtracts the number in the numbers array from the users input number.
                    num -= numbers[i];
                }
            }
        }
        // A while loop that clears the input buffer to prevent any unwanted characters 
        //from being read in the next iteration.
        while (getchar() != '\n')
        {
        }
        // Asks the user if they would like to enter a different number.
        printf("\n\nWould you like to enter a different number? (Y/N): \n");
        // Takes the users input and stores it in the variable choice.
        scanf(" %c", &choice);
    // The do while loop will continue to run as long as the user enters a capital 
    // or lowercase Y.
    } while (choice == 'Y' || choice == 'y');
    // Lets the user know that the program had ended.
    printf("\nProgram ended.\n");
    return 0;
}