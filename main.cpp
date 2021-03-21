#include <iostream>

int main() {
    int selector;
    std::cout << "Welcome to the Data Structure bigO Notation viewer" << std::endl;
    std::cout << "Please select what to do next" << std::endl;
    std::cout << "Type 1 to select the Wiki for information about data structure" << std::endl;
    std::cout << "Type 2 to perform a linear search of X elements randomly generated" << std::endl;
    std::cin >> selector;

    switch(selector) {
        case 1:
            std::cout << "You have selected one" << std::endl;
            break;
        case 2:
            std::cout << "You have selected Two" << std::endl;
            break;
        default:
            std::cout << "Not a valid option" << std::endl;
            break;
    }

    return 0;
}
