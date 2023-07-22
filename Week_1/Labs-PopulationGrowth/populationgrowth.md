
**Background** <hr>

Say we have a population of `n` llamas. Each year, `n / 3` new llamas are born, and `n / 4` llamas pass away.

For example, if we were to start with `n = 1200` llamas, then in the first year, `1200 / 3 = 400` new llamas would be born and `1200 / 4 = 300` llamas would pass away. At the end of that year, we would have `1200 + 400 - 300 = 1300` llamas.

To try another example, if we were to start with `n = 1000` llamas, at the end of the year, we would have `1000 / 3 = 333.33` new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get `333` new llamas born. `1000 / 4 = 250` llamas will pass away, so we’ll end up with a total of `1000 + 333 - 250 = 1083` llamas at the end of the year.


**Instruction for implementation** <hr>

-   Your program should first prompt the user for a starting population size.
    - If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
- Your program should then prompt the user for an ending population size.
    - If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
- Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
- Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal `Years: n`, where `n` is the number of years.

**First solution** <hr>
```
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

```

**Optimized solution** <hr>