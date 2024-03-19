#include <iostream>

int main() {
    int total_cents;

    std::cout << "Enter an integer representing the number of cents: ";
    std::cin >> total_cents;

    int dollars = total_cents / 100;
    total_cents %= 100;

    int quarters = total_cents / 25;
    total_cents %= 25;

    int dimes = total_cents / 10;
    total_cents %= 10;

    int nickels = total_cents / 5;
    total_cents %= 5;

    int pennies = total_cents;

    std::cout << "Dollars : " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes   : " << dimes << std::endl;
    std::cout << "Nickels : " << nickels << std::endl;
    std::cout << "Pennies : " << pennies << std::endl;

    return 0;
}
