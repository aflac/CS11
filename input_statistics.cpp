#include <iostream>
using namespace std;
int main() {
double number;
double sum = 0;
int count = 0;
double curr_max = -9999999999;
string name;
string person_high_score;


// TODO (class exercise): Find the maximum number.
while(cin >> name >> number) {

 cout << "You typed: " << number << endl;


 if(number > curr_max){
    curr_max = number;
    person_high_score = name;

}
sum = sum + number;
count = count + 1; // count++



if (count > 0) {
cout << "Average: " << sum / count << endl;
cout << "Max is: " << curr_max << endl;
}
}

}
