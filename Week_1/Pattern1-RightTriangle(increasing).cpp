#include <iostream>

int main() {
    int level {5};
    for (int i = 1; i <= level; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    return 0;
}
