#include <iostream>
using namespace std;

int main()
{
    cout << "Enter three numbers; ";
    double num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    double max_num = num1;

    if (num2 > max_num)
    {
        max_num = num2;
    }
    if (num3 > max_num)
    {
        max_num = num3;
    }
 
    cout << max_num << endl;
}
