#include <iostream>

using namespace std;

int main() {
    const string GREEN = "\033[32m";

while(bankroll > 0) {

    srand(time(0));// Seeds the rng (makes it less predictable)
    cout << "Pick a number";
    int choice;
    cin >> choice;

    cout << "What's your bet size";
    double bet_size;
    cin >> bet_size;

    int random_roll = rand() % 37;
    cout << "Ball landed on: " << random_roll << endl;

    if (choice == random_roll) {
        cout << GREEN << "You won!" << RESET << endl;
        bankroll = bankroll + (bet_size * STRAIGHT_PAYOUT)
    }
    else{
        cout << RED << "You lost!" << RESET << endl;
        bankroll = bankroll - bet_size;
    }

    cout<<"current bankroll: $" << bankroll << endl;
    cout<<"=============================" << endl;
 }
}