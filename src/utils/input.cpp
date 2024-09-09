#include <iostream>
#include <string>

float userValueInput(const std::string &prompt) {
    float userInput;
    std::cout << prompt << std::endl;
    std::cin >> userInput;
    return userInput;
}
