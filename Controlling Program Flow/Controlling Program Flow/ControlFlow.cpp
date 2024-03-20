#include <iostream>
#include <vector>
#include <limits>

// Function prototypes
void print_numbers(const std::vector<int>& vec);
void add_number(std::vector<int>& vec);
void display_mean(const std::vector<int>& vec);
void display_smallest(const std::vector<int>& vec);
void display_largest(const std::vector<int>& vec);

int main() {
    std::vector<int> vec;
    char selection{};

    do {
        // Display the menu
        std::cout << "P - Print numbers\n";
        std::cout << "A - Add a number\n";
        std::cout << "M - Display mean of the numbers\n";
        std::cout << "S - Display the smallest number\n";
        std::cout << "L - Display the largest number\n";
        std::cout << "Q - Quit\n\n";
        std::cout << "Enter your choice: ";
        std::cin >> selection;
        selection = std::toupper(selection);

        // Handle the menu selection
        if (selection == 'P') {
            print_numbers(vec);
        }
        else if (selection == 'A') {
            add_number(vec);
        }
        else if (selection == 'M') {
            display_mean(vec);
        }
        else if (selection == 'S') {
            display_smallest(vec);
        }
        else if (selection == 'L') {
            display_largest(vec);
        }
        else if (selection == 'Q') {
            std::cout << "Goodbye";
        }
        else {
            std::cout << "Unknown selection, please try again\n";
        }

    } while (selection != 'Q');

    return 0;
}

void print_numbers(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "[] - the list is empty\n";
    }
    else {
        std::cout << "[ ";
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }
}

void add_number(std::vector<int>& vec) {
    int num_to_add{};
    std::cout << "Enter an integer to add to the list: ";
    std::cin >> num_to_add;
    vec.push_back(num_to_add);
    std::cout << num_to_add << " added.\n";
}

void display_mean(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "Unable to calculate the mean - no data\n";
    }
    else {
        int sum{ 0 };
        for (int num : vec) {
            sum += num;
        }
        double mean = static_cast<double>(sum) / vec.size();
        std::cout << "The mean is " << mean << "\n";
    }
}

void display_smallest(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "Unable to determine the smallest number - list is empty\n";
    }
    else {
        int smallest = vec[0];
        for (int num : vec) {
            if (num < smallest) {
                smallest = num;
            }
        }
        std::cout << "The smallest number is " << smallest << "\n";
    }
}

void display_largest(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "Unable to determine the largest number - list is empty\n";
    }
    else {
        int largest = vec[0];
        for (int num : vec) {
            if (num > largest) {
                largest = num;
            }
        }
        std::cout << "The largest number is " << largest << "\n";
    }
}
