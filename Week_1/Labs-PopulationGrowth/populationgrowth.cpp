#include <iostream>

int main() {
    std::cout << "Enter the starting Llama population: " << std::endl;
    int startPopu{};
    std::cin >> startPopu;
    while (startPopu < 9) {
        std::cout << "Enter at least 9 Llamas: " << std::endl;
        std::cin >> startPopu;
    }

    std::cout << "Enter the desired ending population of Llamas: " << std::endl;
    int endPopu{};
    std::cin >> endPopu;
    while (endPopu < startPopu) {
        std::cout << "Enter at least: " << startPopu << " Llamas" << std::endl;
        std::cin >> endPopu;
    }

    int growthRate{startPopu / 3};
    int declineRate{startPopu / 4};
    int combinedRate{(startPopu + growthRate) - declineRate};

    int years{1};

    while (combinedRate < endPopu) {
        int growthUpdater{combinedRate / 3};
        int declineUpdater{combinedRate / 4};
        combinedRate = ((combinedRate + growthUpdater) - declineUpdater);
        years++;
    }

    std::cout << startPopu << " Llamas will grow into " << endPopu << " in " << years << " years" << std::endl;

    return 0;
}

