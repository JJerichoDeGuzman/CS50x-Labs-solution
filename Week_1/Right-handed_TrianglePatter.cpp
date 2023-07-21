#include <iostream>

int main (){

    int n {5};
    for (int i = n ;i >= 1;--i)
    {
        for ( int k = n ; k < 1; --k)
        {
            std::cout << "#";
        }
        for ( int j = 1 ; j < i ; ++j)
        {
            std::cout << "-";
        }

    }



    return 0; 
}