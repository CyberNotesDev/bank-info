#include <iostream>
// Stock market
// Car
// See how much $ I already have
// _ amount always in the bank for auto pay fees

double savings(double savingsAmount = 2200) {
    double autoPayments = 51.38;
    std::string yesOrNo = "";
    double priceOfItem;

    std::cout << "You currently have $" << savingsAmount << " before any deductions" << "\n";
    savingsAmount -= autoPayments;

    std::cout << "You now have $" << savingsAmount << " after your autopayments on Netflix and Adobe" << "\n";

    std::cout << "Have you bought anything in the past week?" << "\n";
    std::cin >> yesOrNo;

    if (yesOrNo == "no") {
        return true;
    } else if (yesOrNo == "yes") {
        std::cout << "How much was the item?" << "\n";
        std::cin >> priceOfItem;
        savingsAmount -= priceOfItem;
        std::cout << "You now have $" << savingsAmount << " left in your savings" << "\n";
    }


    return savingsAmount;
}

int main() {

    std::cout << savings() << "\n";

    return 0;
}