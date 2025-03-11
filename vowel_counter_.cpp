#include <iostream>

using namespace std;

int main() {
string text = "Hello world!";
string vowels = "aeiouAEIOU";
int num_vowels  = 0;

for (int i = 0; i < text.length(); i = i + 1) {
    cout<< "Looking at character: " << text.substr(i,1) << endl;

   // if(text.substr(i,1) == "a" ||text.substr(i,1) == "e" ||text.substr(i,1) == "o" || text.substr(i,1) == "u")

    for ( int j = 0; j < vowels.length(); j = j + 1) {
        if(text.substr(i,1) == vowels.substr(j,1)) {
            num_vowels = num_vowels + 1;
        }
    }
}
                cout << num_vowels << endl;

}
