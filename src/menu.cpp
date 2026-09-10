#include "menu.h"
#include "models.h"
#include <iostream>
#include <string>

void runMenu() {
    bool keepRunning = true;

    while (keepRunning == true) {
        std::cout << "1. Book value\n";
        std::cout << "2. Exit\n"; 
        std::cout << std::endl;

        int choice;
        std::cout << "Select choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double assets, liab, shares;

                std::cout << "Assets (millions): ";
                std::cin >> assets;
                std::cout << "Liabilities (millions): ";
                std::cin >> liab;
                std::cout << "Shares outstanding (millions): ";
                std::cin >> shares;

                double result = BVPS(assets, liab, shares);
                std::cout << "Intrinsic value per share: $" << result << std::endl << std::endl;
                break;
            }

            case 2:
                std::cout << "Exiting... goodbye!\n";
                keepRunning = false;
                break;

            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }

    }

}
