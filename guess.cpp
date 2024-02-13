#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
//We have used rand function to randomly generate the guess number from lower bound to upper bound
using namespace std;

int main() {
    srand(time(0));
int lowerBound,upperBound;
    cout<<"Write starting limit"<<endl;
        cin>>lowerBound;
    cout<<"Write ending limit"<<endl;
        cin>>upperBound;

    char playAgain;
    
    do {
        int secretNumber = rand() % (upperBound - lowerBound + 1) + lowerBound;
        int attempts = 0;
        int guess;
        
        cout << "Hey Swastik! Welcome to the Guessing Game!" << endl;
        cout << "Think of a number between " << lowerBound << " & " << upperBound << "." << endl;
        
        while (true) {
            cout << "Enter your guess: ";
            if (!(cin >> guess)) {
                cout << "Invalid input. Please enter a valid number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            
            attempts++;
            
            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
                break;
            }
        }
        
        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');
    
    cout << "Thanks for playing! Goodbye." << endl;
    
    return 0;
}