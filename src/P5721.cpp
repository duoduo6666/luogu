#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    long n, i = 0;
    std::cin >> n;
    
    for (size_t y = 0; y < n; y++)
    {
        for (size_t x = 0; x < n-y; x++)
        {
            std::cout << std::setw(2)
                      << std::setfill('0')
                      << ++i;
        }
        std::cout << std::endl;
    }
    
    return 0;
}
