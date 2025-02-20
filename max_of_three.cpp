#include <iostream>
using namespace std;

int main()
{
    cout << "Enter three numbers; ";
    double num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    double max_num;

    if (num1 > num2 && num1 > num3)
    {
        max_num == num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max_num == num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        max_num == num3;
    }
    cout << max_num << endl;
}
