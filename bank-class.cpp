#include <iostream>
using namespace std;

class Bank {
    public:
        void signIn() {
            int pin = 1010;
            int pinAnswer;
            int tries = 3;
            while(pinAnswer != pin && tries > 0) {
                cout << "What is the pin? ";
                cin >> pinAnswer;
                tries--;
                if (tries != 0 && pinAnswer != pin) {
                    cout << "Incorrect, you now have " << tries << " tries left.\n";
                } else if (tries == 0 && pinAnswer != pin) {
                    cout << "You are now locked out! Contact our specialist for help.\n";
                } else {
                    cout << "Correct!\n";
                    string checkingsOrSavings;
                    cout << "Welcome! would you like to go into your checkings or savings? ";
                    cin >> checkingsOrSavings;
                    if (checkingsOrSavings == "checkings") {
                        checkings(20212);
                    } else if (checkingsOrSavings == "savings") {
                        savings(2020);
                    } else {
                        cout << "try again!\n";
                        while(checkingsOrSavings != "checkings" || checkingsOrSavings != "savings") {
                            cout << "Welcome! would you like to go into your checkings or savings? \n";
                            cin >> checkingsOrSavings;
                            if (checkingsOrSavings == "checkings") {
                                checkings(22);
                                break;
                            } else if (checkingsOrSavings == "savings") {
                                savings(2000);
                                break;
                            }
                        }
                    }
                }
            }
        }

        void savings(double savingsAmount) {
            savingsAmount = 2200;
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
                cout << "You now have " << savingsAmount << " in your account\n";
            } else if (yesOrNo == "yes") {
                cout << "How much was the item? ";
                cin >> priceOfItem;
                savingsAmount -= priceOfItem;
                cout << "You now have $" << savingsAmount << " left in your savings" << "\n";
            }
        }

        void checkings(double amount) {
            amount = 350.50;
            string yesOrNo;
            cout << "Would you like to know your balance?(yes/no) ";
            cin >> yesOrNo;

            while(yesOrNo != "yes" || yesOrNo != "no") {
                if (yesOrNo == "yes") {
                    cout << "Your balance is $" << amount;
                    break;
                } else if (yesOrNo == "no") {
                    cout << "Okay, Goodbye!";
                    break;
                } else {
                    cout << "Would you like to know your balance?(yes/no) ";
                    cin >> yesOrNo;
                }
            }
        }
};