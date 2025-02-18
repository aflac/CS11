#include <iostream>
using namespace std;

int main()
{
    cout<< "type a number and i'll analyze it";
    int num; 
    cin >> num;

    if(num == 0){
    cout<< "Your' input was Zero!." << endl;
    }
    else if (num < 0){
    cout <<"Your input is negative" << endl;
    }
    else if(num > 0){
        cout << "Your answer is positive" << endl;
    }
}