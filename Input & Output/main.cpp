#include <iostream>
#include <string>

int main() {
    std::cerr << "Error Message: Something went wrong..." << std::endl;
    std::clog << "Log Message: Something happened..." << std::endl;

    std::cout << "--------------------------------------" << std::endl;

    // Data Input
    
    /*int age;

    std::string name;   

    std::cout << "Please type your name and age: " << std::endl;*/

    //std::cin >> name;
    //std::cin >> age;

    /*std::cin >> name >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old!" << std::endl;*/

    // Data with spaces

    int age;

    std::string fullName;

    std::cout << "Please type your full name and age: " << std::endl;

    std::getline(std::cin, fullName);

    std::cin >> age;

    std::cout << "Hello " << fullName << "! You are " << age << " years old!" << std::endl;

    return 0;
}