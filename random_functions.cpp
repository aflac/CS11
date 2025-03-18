#include <iostream>
#include <cmath>
using namespace std;

void greet(string name) {
    cout << "Hello " << name << "!" << endl;
}

int roll_dice() {
    int random_roll = rand() % 6 + 1;
    return random_roll;
}

double area_of_circle(double radius) {

    double area = 3.14159 * pow(radius,2);
    return area;


}

double volume_of_sphere(double radius){
    double volume = 1.333333 * 3.14159 * pow(radius,3);
    return volume;

}

double volume_of_cone(double radius, double height) {
    double result = (1.0/3) * 3.14159 * pow(radius,2) * height;
    return result;
}

int main(){
    // greet("Bob");
   // srand(time(0));

   // int result = roll_dice();
   // cout << "Dice number is: " << result << endl;

   cout << "area of circle with radius 3 is: "
        << area_of_circle(3) << endl;

   cout << "volume of sphere with radius 3 is: "
        << volume_of_sphere(3) << endl; 

    cout << "Volume of cone with radius 3, height 5 is: "
         << volume_of_cone(3,5) << endl;
        return 0;
}