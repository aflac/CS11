#include <iostream>

using namespace std;

int main() {
    double number;
    int count = 0;
    double sum = 0;

    //TODO(class exercise : find the maximum number  and print out max)
    while(cin>> number) {
        cout << "You Typed: "<< number << endl;
        sum = sum + number;
        count = count + 1;
    }


        if(count > 0){
                cout << "Average" << sum / count << endl;

        }
}
