#include <iostream>

using namespace std;

int main() {

 cout << "Enter decimal input for your Gross income ";
    double GROSS_INCOME;
    cin >> GROSS_INCOME;

    double STD_DEDUCTION = 14600;

    double B_1_HIGH = 11600;
    double B_2_HIGH = 47150;
    double B_3_HIGH = 100525;
    double B_4_HIGH = 191950;
    double B_5_HIGH = 243725;
    double B_6_HIGH = 609350;

    double TAXABLE_INCOME = (GROSS_INCOME-STD_DEDUCTION);
    double TAXES_OWED;
    // bracket 1
    if(TAXABLE_INCOME < B_1_HIGH){
        TAXES_OWED = TAXABLE_INCOME * 0.10;
    }
    // bracket 2
    else if (TAXABLE_INCOME > B_1_HIGH && TAXABLE_INCOME< B_2_HIGH) {
      TAXES_OWED = (TAXABLE_INCOME - B_1_HIGH) * 0.12 + (B_1_HIGH - 0) * 0.1;
    }
    // bracket 3
    else if (TAXABLE_INCOME > B_2_HIGH && TAXABLE_INCOME< B_3_HIGH) {
        TAXES_OWED = (TAXABLE_INCOME - B_2_HIGH) * 0.22 + (B_2_HIGH - B_1_HIGH) * 0.12 + (B_1_HIGH - 0) * 0.1;
    }
    // bracket 4
    else if (TAXABLE_INCOME > B_3_HIGH && TAXABLE_INCOME< B_4_HIGH) {
        TAXES_OWED = (TAXABLE_INCOME - B_3_HIGH) * 0.24 + (B_3_HIGH - 47150) * 0.22 + (B_2_HIGH - 11600) * 0.12 + (B_1_HIGH - 0) * 0.1 ;
    }
    // bracket 5
    else if (TAXABLE_INCOME > B_4_HIGH && TAXABLE_INCOME< B_5_HIGH) {
        TAXES_OWED = (TAXABLE_INCOME - B_4_HIGH) * 0.32 + (B_4_HIGH - 100525) * 0.24 + (B_3_HIGH - 47150) * 0.22 + (B_2_HIGH - 11600) * 0.12 + (B_1_HIGH - 0) * 0.1 ;
    }
    // bracket 6
    else if (TAXABLE_INCOME > B_5_HIGH && TAXABLE_INCOME< B_6_HIGH) {
        TAXES_OWED = (TAXABLE_INCOME - B_5_HIGH) * 0.35 + (B_5_HIGH - 191950) * 0.32 + (B_4_HIGH - 100525) * 0.24 + (B_3_HIGH - 47150) * 0.22 + (B_2_HIGH - 11600) * 0.12 + (B_1_HIGH - 0) * 0.1 ;
    }
    // bracket 7
    else if (TAXABLE_INCOME > B_6_HIGH) {
        TAXES_OWED = (TAXABLE_INCOME - B_6_HIGH) * 0.37 + (B_6_HIGH - 243725) * 0.35 + (B_5_HIGH - 191950) * 0.32 + (B_4_HIGH - 100525) * 0.24 + (B_3_HIGH - 47150) * 0.22 + (B_2_HIGH - 11600) * 0.12 + (B_1_HIGH - 0) * 0.1;
    }
    cout << TAXES_OWED <<endl;
}

