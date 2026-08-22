#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator using current time
    srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int targetNumber = (rand() % 100) + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "=================================\n";
    cout << "    NUMBER GUESSING GAME        \n";
    cout << "=================================\n";
    cout << "I'm thinking of a number between 1 and 100.\n\n";

    // Loop until the user guesses the correct number
    while (userGuess != targetNumber) {
        cout << "Enter your guess: ";
        
        // Handle invalid non-integer inputs safely
        if (!(cin >> userGuess)) {
            cout << "Invalid input! Please enter a valid integer.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        attempts++;

        if (userGuess > targetNumber) {
            cout << "Too high! Try again.\n\n";
        } else if (userGuess < targetNumber) {
            cout << "Too low! Try again.\n\n";
        } else {
            cout << "\nCongratulations! You guessed the correct number (" 
                      << targetNumber << ") in " << attempts << " attempts!\n";
        }
    }

    return 0;
}