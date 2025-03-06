#include <iostream>

using namespace std;

int main() {

 cout << "Enter decimal input for your Gross income ";
    double GROSS_INCOME;
    cin >> GROSS_INCOME;

    double STD_DEDUCTION = 14600;

    double B_1_HIGH = 11600;
    double B_2_HIGH = 47150;
    double TAXABLE_INCOME = (GROSS_INCOME-STD_DEDUCTION);
    double TAXES_OWED;

    if(TAXABLE_INCOME < B_1_HIGH){

        TAXES_OWED = (TAXABLE_INCOME * 0.10);

    }
    else if (TAXABLE_INCOME > B_1_HIGH && TAXABLE_INCOME< B_2_HIGH)
    {
        /* code */
    }
    

    cout << TAXES_OWED <<endl;
}
