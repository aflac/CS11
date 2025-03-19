#include <iostream>

using namespace std;

int main() {

    long n ;
    cin >> n;
    int sum = 0;
    int count = 0;
    int digit;
    while(n > 0){
         digit = n % 10; // Grab last digit.
        n = n / 10;         // Cut off the last digit.      

        if(count % 2 == 0) {
            sum = sum + digit;

        }
        else if(count % 2 == 1){
            digit = digit * 2;

            if(digit > 9){
                digit = digit - 9;
            }
            sum = sum + digit;
        }
         count++;

    }

         if(sum % 10 == 0){

        cout << "Valid" << endl;
    }
        else{
            cout<< "Invalid" << endl;
        }
}
