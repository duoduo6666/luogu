#include <iostream>

int main(int argc, char const *argv[])
{
    long n;
    std::cin >> n;

    long x = 2;
    while (n % x != 0)
    {
        x++;
    }
    std::cout << n / x << std::endl;
    return 0;
}
