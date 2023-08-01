#include <iostream>

int main () {

    std::cout << "Enter integer between 1 and 8\n";
    int level {};
    std::cin >> level; 

    while ( level < 1 || level > 8) 
    {
        std::cout << "Enter an integer between 1 and 8 only\n";
        std::cin >> level; 
    }

    std::cout << "Test if correct";




    return 0;
}