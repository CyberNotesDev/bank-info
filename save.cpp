#include <iostream>

using namespace std;

double savings(double savingsAmount = 2200) {
    double autoPayments = 51.38;
    string yesOrNo = "";
    string yesOrNoAutoPayments;
    double priceOfItem;

    cout << "You currently have $" << savingsAmount << " before any deductions" << "\n";
    cout << "Did you pay the autopayments yet? ";
    cin >> yesOrNoAutoPayments;
    if (yesOrNoAutoPayments == "yes") {
        savingsAmount -= autoPayments;
    }

    cout << "You now have $" << savingsAmount << " after your autopayments on Netflix and Adobe" << "\n";
    cout << "Have you bought anything in the past week? ";
    cin >> yesOrNo;

    if (yesOrNo == "no") {
        return savingsAmount;
    } else if (yesOrNo == "yes") {
        cout << "How much was the item? ";
        cin >> priceOfItem;
        savingsAmount -= priceOfItem;
        cout << "You now have $" << savingsAmount << " left in your savings" << "\n";
    }

    return savingsAmount;
}

int main() {

    cout << savings() << "\n";

    return 0;
}