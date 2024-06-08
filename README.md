# CodeAlpha_Project_NumberGuessingGame
C++ Number Guessing Game

This C++ program implements a classic number guessing game. Here's how it works:

Setup:

The code includes necessary headers for input/output (iostream), random numbers (cstdlib), and time (ctime).
It initializes variables:
num: Stores a random number between 1 and 100 (generated using srand and rand).
guess: Stores the user's guess.
tries: Counts the number of attempts made by the user (initialized to 0).
Welcome Message:

The program greets the user with a welcome message.
Guessing Loop:

A do-while loop ensures the game runs at least once.
Inside the loop:
The user is prompted to enter a guess between 1 and 100.
The user's guess is stored in the guess variable.
tries is incremented to track the number of attempts.
The code checks if the guess is correct using conditional statements:
If the guess is higher than the number (guess > num), a "Too high!" message is displayed.
If the guess is lower than the number (guess < num), a "Too low!" message is displayed.
If the guess is correct (else), a congratulatory message is displayed, including the number of tries it took the user to guess correctly.
Game Loop:

The loop continues as long as the guess is not equal to the random number (guess != num). This ensures the user keeps guessing until they get it right.
End of Game:

Once the user guesses the correct number, the loop exits, and the program terminates.
This code demonstrates basic programming concepts like user input, random number generation, conditional statements, and loops. It's a fun and engaging way to practice these skills in C++.
