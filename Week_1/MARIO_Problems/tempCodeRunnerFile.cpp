#include <iostream>

void towerbuilder(int height)
{
 int n = height; 
    for (int i = 1; i <= n ; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            std::cout << " ";
        }
        for(int k = 1; k <= i; ++k)
        {
            std::cout << "#";
        }
        std::cout << "  ";
        for(int l = 1; l <= i; ++l)
        {
            std::cout << "#";
        }
       std::cout << std::endl;
    }
}

int main(){

   std::cout << "Enter tower height\n";
   std::cout << "Enter integer between 1 and 8:\n";
   int level {};
   std::cin >> level; 

   while (level < 1 || level > 8)
   {
    std::cout << "Enter integer between 1 and 8 only:\n";
    std::cin >> level;
   }

   towerbuilder(level);

    return 0; 
}