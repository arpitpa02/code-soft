#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int maxAttempts = 5;  // You can adjust the maximum number of attempts

    cout << "Welcome to the Guess the Number game!\n";
    cout << "Try to guess the secret number between 1 and 100.\n";

    for (int attempts = 1; attempts <= maxAttempts; ++attempts) {
        cout << "Attempt " << attempts << " - Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! ";
        } else {
            cout << "Too high! ";
        }

        cout << "You have " << maxAttempts - attempts << " attempts remaining.\n";
    }

    if (guess != secretNumber) {
        cout << "Sorry, you've run out of attempts. The correct number was " << secretNumber << ".\n";
    }

    return 0;
}
