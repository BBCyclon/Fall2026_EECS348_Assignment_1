/* 
Name of program: Program_from_ChatGPT
Description: C program that picks a secret number between 1 and 10. The user gets up to 3 tries to guess the number.
Inputs: User guesses
Outputs: Terminal messages
All Collaborators: Me, ChatGPT 
Author: Bruno Barron Silva
Creation date: 9/8/2026
Revision date: N/A
Revisions: None
*/

#include <stdio.h>  // Includes the standard input/output library so we can use printf() and scanf()

int main()  // Starts the main function where the program begins running
{  // Begins the main function's block

    int secretNumber = 7;  // Stores the fixed secret number that the user needs to guess
    int guess;  // Creates a variable to store the user's guess
    int attempts = 0;  // Keeps track of how many guesses the user has made
    int correct = 0;  // Keeps track of whether the user guessed the number correctly

    printf("Guess a number between 1 and 10.\n");  // Tells the user what number range they should guess

    while (attempts < 3 && correct == 0)  // Repeats the loop while the user has fewer than 3 attempts and has not won
    {  // Begins the while loop

        attempts++;  // Adds 1 to the number of attempts before asking for a guess

        printf("Attempt %d/3. Enter your guess: ", attempts);  // Tells the user which attempt they are on and asks for their guess

        scanf("%d", &guess);  // Reads the user's guess and stores it in the guess variable

        if (guess == secretNumber)  // Checks if the user's guess is equal to the secret number
        {  // Begins the correct-answer block

            printf("Correct! You win!\n");  // Tells the user that they guessed the number correctly

            correct = 1;  // Changes correct to 1 to show that the user won

        }  // Ends the correct-answer block

        else if (guess < secretNumber)  // Checks if the user's guess is lower than the secret number
        {  // Begins the too-low block

            printf("Too low! Try again.\n");  // Tells the user that their guess was too low

        }  // Ends the too-low block

        else  // Runs when the guess is not correct and is not too low
        {  // Begins the too-high block

            printf("Too high! Try again.\n");  // Tells the user that their guess was too high

        }  // Ends the too-high block

    }  // Ends the while loop

    if (correct == 0)  // Checks if the user never guessed the secret number correctly
    {  // Begins the losing block

        printf("You lose! The secret number was %d.\n", secretNumber);  // Tells the user they lost and reveals the secret number

    }  // Ends the losing block

    return 0;  // Ends the program and tells the computer that the program ran successfully

}  // Ends the main function