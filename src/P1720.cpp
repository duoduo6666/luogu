#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
    long n;
    std::cin >> n;

    double F = (pow((1 + std::sqrt(5)) / 2, n) - pow((1 - std::sqrt(5)) / 2, n)) / std::sqrt(5);
    std::cout << std::fixed << std::setprecision(2) << F << std::endl;
    return 0;
}
