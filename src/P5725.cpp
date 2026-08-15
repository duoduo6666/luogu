#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    long n;
    std::cin >> n;

    long i = 0;
    for (size_t row = 0; row < n; row++)
    {
        for (size_t col = 0; col < n; col++)
        {
            std::cout << std::setw(2) << std::setfill('0') << ++i; 
        }
        std::cout << std::endl;       
    }
    std::cout << std::endl; 

    i = 0;
    for (size_t row = 0; row < n; row++)
    {
        for (size_t col = 0; col < n; col++)
        {
            if (n-col-1 > row)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << std::setw(2) << std::setfill('0') << ++i; 
            }
        }
        std::cout << std::endl;       
    }
    return 0;
}
