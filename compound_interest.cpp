#include <iostream>

using namespace std;

int main() {
    int year = 2025;

    //double salary = 58000;
    double balance = 2000;
    const double TARGET = balance * 2;
    const double INTEREST_RATE = 0.04;

    //cout << fixed << setprecision(2);
    // TODO: update the loop to stop when we're a billionaire

    while(balance < TARGET){
       year = year +1;  
       balance = balance + (balance * INTEREST_RATE);
       
      // balance = balance + salary;
       cout <<"Year: " << year<< "  " << "Balance: " << balance << endl;
    }
}
