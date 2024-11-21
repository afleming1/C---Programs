#include <iostream>

int addNumbers(int firstNumber, int secondNumber) {
    // int sum = firstNumber + secondNumber;

    return firstNumber + secondNumber;
}

int subtractNumbers(int firstNumber, int secondNumber) {
    return firstNumber - secondNumber;
}

int multiplyNumbers(int firstNumber, int secondNumber) {
    return firstNumber * secondNumber;
}

int main() {
    int firstNumber {13}; // Statement
    int secondNumber {7};

    std::cout << "First Number: " << firstNumber << std::endl;
    std::cout << "Second Number: " << secondNumber << std::endl;

    int sum = firstNumber + secondNumber;

    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Function Sum: " << addNumbers(10, 9) << std::endl;
    std::cout << "Function Difference: " << subtractNumbers(20, 4) << std::endl;
    std::cout << "Function Product: " << multiplyNumbers(4, 8) << std::endl;

    return 0;
}