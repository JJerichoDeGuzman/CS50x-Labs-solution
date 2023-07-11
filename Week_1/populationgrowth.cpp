#include <iostream>

int main(){


// Starting population: User input at least 9 llamas 

    std::cout << "Enter the starting Llama population: " << std::endl;
    int startPopu {};
    std::cin >> startPopu; 
    while (startPopu < 9 ) {
         std::cout << "Enter at least 9 Llamas: " << std::endl;
         std::cin >> startPopu; 
    }

//Ending population: At least equal to user input

    std::cout << "Enter the desired ending population of Llamas: " << std::endl;
    int endPopu {}; 
    std::cin >> endPopu;
    while (endPopu < startPopu ) {
         std::cout << "Enter at least: " << startPopu << " Llamas" << std::endl;  
         std::cin >> endPopu;
    }

//Calculate the number of years required

    int growthRate {startPopu / 3};
    int declineRate {startPopu / 4};
    int combinedRate { (startPopu + growthRate) - declineRate};    


    // std::cout << combinedRate << std :: endl;
    
    int years {1};

    while (combinedRate < endPopu){

        int growthUpdater {combinedRate / 3};
        int declineUpdater {combinedRate / 4};
        combinedRate =  ( (combinedRate + growthUpdater ) - declineUpdater);
        years++; 
    
    }

    // Print the the final answer

    std::cout << startPopu << " Llamas will grow into " << endPopu << " in " << years << " years" << std::endl;
    



    return 0; 

}