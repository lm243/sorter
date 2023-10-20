#include <iostream>
#include <algorithm>

int main ()
{
  int i[3];
  std::cout << "This is a robbery, give me your integers ! ";
  
    for(int j = 0; j < sizeof(i); j++)
    {
        std::cin >> i[j];
    }
    
    int n = sizeof(i) / sizeof(i[0]);

    std::sort(i , i + n);
    std::cout << i;
}