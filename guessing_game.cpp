#include <iostream>
using namespace std;
int main() {
    const string GREEN = "\033[32m"; // ANSI Escape Codes.
    const string RED = "\033[31m";
    const string RESET_COLOR = "\033[0m";
    srand(time(0)); // Seeds the RNG with the current time.
    int answer = rand() % 10; // Restrict range between 0 and 9.
    bool game_is_over = false;
    while (game_is_over == false) {
        cout << "Guess a number between [0, 9]: ";
        int guess;
        cin >> guess;
        if (guess < answer) {
            cout << RED << "Too low!" << RESET_COLOR << endl;
        }
        else if (guess > answer) {
            cout << RED << "Too high!" << RESET_COLOR << endl;
        }
        else if (answer == guess) {
            cout << GREEN << "Correct!" << RESET_COLOR << endl;
    
            cout << "would you like to try again(yes/no)?";
            string choice;
            cin >> choice;
    
            if (choice == "yes"){
                game_is_over = false;
                answer = rand() % 10;
            }
            else if (choice == "no") {
                game_is_over=true;
            }
        
        }
    }
// cout << "Answer is: " << answer << endl;
}
