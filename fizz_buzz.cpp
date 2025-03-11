#include <iostream>

using namespace std;

int main(){

    int n = 1;
    int t = 1;
    while (t < 22){
         cout << n;
        if(n % 5 == 0 && n % 3 == 0){
            cout<< "  FizzBuzz";
        }
        else if(n % 3 == 0){
            cout<< " Fizz  ";

        }
        else if(n % 5 == 0){
            cout << " Buzz";
        }
        cout << endl;
            t++;
            n++;
    }

}
