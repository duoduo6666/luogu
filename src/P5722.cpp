#include <iostream>

int main(int argc, char const *argv[])
{
    long n, sum = 0;
    std::cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
