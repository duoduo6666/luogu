#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    if (11+3*n > 5*n)
    {
        std::cout << "Local" << std::endl;
    }
    else
    {
        std::cout << "Luogu" << std::endl;
    }
    return 0;
}
