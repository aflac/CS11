#include <iostream>

using namespace std;

int main() {
    int year = 2025;

    double salary = 58000;
    double balance = 0;
    const double TARGET = 1000000000;
    //cout << fixed << setprecision(2);

    // TODO: update the loop to stop when we're a billionaire

    while(balance < TARGET){  
       year = year +1;  
       balance = balance + salary;
       cout << "year:"<< year << "balance: " << balance << endl;
    }
}
