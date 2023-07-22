#include <iostream>

int main() {
    int n {5};
    for (int i = n; i >= 1; --i) {
        for (int j = n; j > i; --j) {
            std::cout << "-";
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
