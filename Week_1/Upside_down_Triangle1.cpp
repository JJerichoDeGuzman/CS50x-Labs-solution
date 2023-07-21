#include <iostream>

int main (){
    int n {5};
    
    for (int i = n; i >= 1; --i){
        for (int j = i; j >= 1; --j)
        {
            std::cout << "#" ;
        }
        std::cout << std::endl;

    }


    return 0;
}