#include <iostream>

    void towerbuild(int height) 
    {
        for (int i = 1;i <= height ; ++i )
        {
            for (int j = 1; j <= i; ++j)
            {
                std::cout << "#";
            }
            std::cout << std::endl;
        }
    }

int main () {

    std::cout << "Enter integer between 1 and 8\n";
    int level {};
    std::cin >> level; 

    while ( level < 1 || level > 8) 
    {
        std::cout << "Enter an integer between 1 and 8 only\n";
        std::cin >> level; 
    }

    towerbuild(level);

    return 0;
}