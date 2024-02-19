#include <iostream>
#include "../DZDLL/Headerdll.h"

int main() {
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << Leaver::leave(name) << std::endl;
    return 0;
}
