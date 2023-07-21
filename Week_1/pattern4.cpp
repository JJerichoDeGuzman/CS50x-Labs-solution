#include <iostream>

int main() {
    int n = 5;
    for (int i = n; i >= 1; --i) {
        for (int k = n - i; k > 0; --k) {
            std::cout << "-";
        }

        for (int j = i; j > 0; --j) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
