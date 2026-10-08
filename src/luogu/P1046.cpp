#include <iostream>

int main(int argc, char const *argv[])
{
    long apple[10], high, x=0;
    for (size_t i = 0; i < 10; i++)
    {
        std::cin >> apple[i];
    }
    std::cin >> high;

    for (size_t i = 0; i < 10; i++)
    {
        if (high+30 >= apple[i])
        {
            x++;
        }
        
    }
    std::cout << x << std::endl;
    return 0;
}
