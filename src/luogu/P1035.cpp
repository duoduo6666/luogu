#include <iostream>

int main(int argc, char const *argv[])
{
    long k, n = 0;
    double sum = 0;
    std::cin >> k;
    while (sum <= k)
    {
        sum += 1./++n;
    }
    std::cout << n << std::endl;
    return 0;
}
