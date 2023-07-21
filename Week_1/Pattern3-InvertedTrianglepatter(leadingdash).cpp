#include <iostream>

int main() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int k = n - i; k > 0; --k) {
            std::cout << "-";
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
