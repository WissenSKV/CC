#include <iostream>
#include "../DZLIB/Headerlib.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << Greeter::greet(name) << std::endl;
    return 0;
}
