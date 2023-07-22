#include <iostream>

int main() {
    int n = 11;
    for (int i = n; i >= 1; --i) {
        for (int k = n - i; k > 0; --k) {
            std::cout << " ";
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << i;
        }
        std::cout << std::endl;
    }

    return 0;
}