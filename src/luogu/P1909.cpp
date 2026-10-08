#include <iostream>
#include <limits>
#include <algorithm>

int main()
{
    long n, pencil, price, spend=std::numeric_limits<long>::max();
    std::cin >> n;
    for (size_t i = 0; i < 3; i++)
    {
        std::cin >> pencil >> price;
        spend = std::min(spend, (n+pencil-1)/pencil*price);
    }
    std::cout << spend << std::endl;
    return 0;
}
