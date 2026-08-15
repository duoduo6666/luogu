#include <iostream>

int main(int argc, char const *argv[])
{
    long n, min, max;
    std::cin >> n >> min;
    max = min;
    for (size_t i = 1; i < n; i++)
    {
        long t;
        std::cin >> t;
        if (t < min) min = t;
        if (t > max) max = t;
    }
    std::cout << max - min << std::endl;
    return 0;
}
