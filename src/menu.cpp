#include "menu.h"
#include "models.h"
#include <iostream>
#include <string>

void runMenu() {
    bool keepRunning = true;

    while (keepRunning == true) {
        std::cout << "1. book value\n";
        std::cout << "2. exit\n"; 

        int choice;
        std::cout << "Select choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double assets, liab, shares;

                std::cout << "Assets: ";
                std::cin >> assets;
                std::cout << "Liabilities: ";
                std::cin >> liab;
                std::cout << "shares outstanding: ";
                std::cin >> shares;

                double result = NAV(assets, liab, shares);
                std::cout << "Intrinsic value per share: $" << result << std::endl;
                break;
            }

            case 2:
                std::cout << "Exiting... goodbye!";
                keepRunning = false;
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }

    }

}
