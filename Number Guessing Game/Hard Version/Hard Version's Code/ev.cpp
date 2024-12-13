#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int targetNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?\n";

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        attempts++; // Count attempts

        int difference = abs(userGuess - targetNumber); // Calculate how far off the guess is

        if (userGuess > targetNumber) {
            if (difference > 20) {
                cout << "Too high! You're way off. Try again.\n";
            } else {
                cout << "High, but you're getting closer. Try again.\n";
            }
        } else if (userGuess < targetNumber) {
            if (difference > 20) {
                cout << "Too low! You're way off. Try again.\n";
            } else {
                cout << "Low, but you're getting closer. Try again.\n";
            }
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != targetNumber); // Keep looping until the guess is correct

    return 0;
}
