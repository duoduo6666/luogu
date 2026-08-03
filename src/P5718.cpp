#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    long n, a, min = 1001;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a;
        min = std::min(a, min);
    }
    std::cout << min << std::endl;
    return 0;
}
