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


// Print the the final answer



    return 0; 

}