#include <iostream>


int main(){

    int n {5};
   
   for (int i = 1 ; i <= n ; ++i)
   {
    for (int j = n ;  j > 0 ; --j )
    {
        std::cout << "-";
    }
    for (int k = 1; k <= i; ++k)
    {
        std::cout << "#";
    }
    
    std::cout << std::endl;
   }

    return 0;
}