/* 
Name of program: Program_from_Gemini
Description: C program that picks a secret number between 1 and 10. The user gets up to 3 tries to guess the number.
Inputs: User guesses
Outputs: Terminal messages
All Collaborators: Me, Gemini
Author: Bruno Barron Silva
Creation date: 9/8/2026
Revision date: N/A
Revisions: None
*/

#include <stdio.h> // Include the standard input/output library for printf and scanf

int main() { // Define the main function where execution begins
    const int SECRET_NUMBER = 7; // Store the target secret number to be guessed
    const int MAX_ATTEMPTS = 3; // Define the maximum number of allowed attempts
    int guess; // Declare a variable to store the user's current guess
    int won = 0; // Initialize a flag variable (0 for lost, 1 for won)

    printf("Guess a number between 1 and 10.\n"); // Print the opening instruction message

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) { // Loop from attempt 1 up to MAX_ATTEMPTS
        printf("Attempt %d/%d. Enter your guess: ", attempt, MAX_ATTEMPTS); // Display current attempt prompt
        scanf("%d", &guess); // Read the integer input entered by the user

        if (guess == SECRET_NUMBER) { // Check if the user guessed the secret number correctly
            printf("Correct! You win!\n"); // Print winning feedback message
            won = 1; // Mark the outcome flag as won
            break; // Immediately exit the loop since the correct answer was found
        } else if (guess < SECRET_NUMBER) { // Check if the guess was lower than the secret number
            if (attempt < MAX_ATTEMPTS) { // Check if there are remaining attempts left
                printf("Too low! Try again.\n"); // Print prompt to try a higher number
            } else { // Handle the case when no attempts remain
                printf("Too low!\n"); // Print final feedback message for a low guess
            } // End of inner low-guess condition check
        } else { // Handle the case where the guess was higher than the secret number
            if (attempt < MAX_ATTEMPTS) { // Check if there are remaining attempts left
                printf("Too high! Try again.\n"); // Print prompt to try a lower number
            } else { // Handle the case when no attempts remain
                printf("Too high!\n"); // Print final feedback message for a high guess
            } // End of inner high-guess condition check
        } // End of outer check for incorrect guesses
    } // End of the guessing loop

    if (!won) { // Check if the player finished all attempts without winning
        printf("You ran out of attempts. You lose!\n"); // Print game over loss message
    } // End of loss condition check

    return 0; // Return 0 to indicate that the program executed successfully
} // End of the main function