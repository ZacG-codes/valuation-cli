#include <string>
#include <iostream>

int main() {
    std::string ticker;
    int model;
    // prompt ticker and model
    if (ticker.empty()) {
        std::cout << ("Input ticker (S&P 500): ");
        std::cin >> ticker;
        std::cout << "select model (discounted cash flow (1), dividend discount (2), residual income (3), net asset value (4)): ";
        std::cin >> model;

        // test
        std::cout << "model: " << model << std::endl;
        std::cout << "ticker: " << ticker << std::endl;
    }
    return 0;
}
