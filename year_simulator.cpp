#include <iostream>

using namespace std;

int main() {
    int year = 2025;

    while(year < 2030) {
        cout << "It is the year: " << year << endl;
        year = year + 1;


    }

    for (int year = 2025; year < 2030; year = year + 1){
        cout << "It is the year: " << year << endl; 
    }


}