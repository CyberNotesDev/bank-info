#include <iostream>

using namespace std;

double savings(double savingsAmount = 2200) {
    double autoPayments = 51.38;
    double priceOfItem;
    string yesOrNo = "";
    string yesOrNoAutoPayments;

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
    int pin = 1010;
    int pinAnswer;
    int tries = 3;
    while(pinAnswer != pin && tries > 0) {
        cout << "What is the pin? ";
        cin >> pinAnswer;
        tries--;
        if (tries != 0 && pinAnswer != pin) {
            cout << "Incorrect, you now have " << tries << " tries left.\n";
        } else if (tries == 0) {
            cout << "You are now locked out! Contact our specialist for help.\n";
        } else {
            break;
        }
    }

    // cout << savings() << "\n";

    return 0;
}