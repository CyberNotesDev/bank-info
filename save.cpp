#include <iostream>

double myBank(double savingsAmount) {
    double autoPay = 51.38;
    int car = 3000;
    std::cout << "You currently have $" << savingsAmount << " before any deductions" << "\n";
    savingsAmount = savingsAmount - autoPay;
    std::cout << "You now have $" << savingsAmount << " after your autopay on Netflix and Adobe" << "\n";

    return savingsAmount;
}

int main() {
    // Stock market
    // Car
    // See how much $ I already have
    // _ amount always in the bank for auto pay fees

    // std::cout << "Hello, What is your pin?" << "\n";
    // int pinnumber = 1010;
    // int isItPin;
    // int trys = 0;
    // while(isItPin != pinnumber && trys != 4) {
    //     std::cin >> isItPin;
    //     trys++;
    //     std::cout << "Incorrect, try again!" << "\n" << "You now have " << 4-trys << " Trys left\n";
    // }

    std::cout << myBank(200);

    return 0;
}