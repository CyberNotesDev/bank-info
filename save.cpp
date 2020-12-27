#include <iostream>
// Stock market
// Car
// See how much $ I already have
// _ amount always in the bank for auto pay fees

double myBank(double savingsAmount) {
    double autoPay = 51.38;
    int car = 3000;
    std::cout << "You currently have $" << savingsAmount << " before any deductions" << "\n";
    savingsAmount = savingsAmount - autoPay;
    std::cout << "You now have $" << savingsAmount << " after your autopay on Netflix and Adobe" << "\n";

    return savingsAmount;
}

int main() {

    std::cout << "If you want to save a good amount for stocks before the age of 18 then you should save 10% of your income" << "\n";

    double myTotal = myBank(200);
    std::cout << myTotal;

    double stocksAmount = myTotal * 0.1;

    std::cout << "\n" << stocksAmount << "\n";

    return 0;
}