#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string for the pyramid: ";
    std::cin >> input;

    size_t length = input.length();

    for (size_t row = 0; row < length; ++row) {
        std::string spaces(length - row - 1, ' ');
        std::cout << spaces;

        for (size_t j = 0; j <= row; ++j) {
            std::cout << input[j];
        }

        for (int k = row - 1; k >= 0; --k) {
            std::cout << input[k];
        }

        std::cout << std::endl;
    }

    return 0;
}
