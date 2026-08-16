#include <iostream>
#include <algorithm>
#include <iomanip>

int main(int argc, char const *argv[])
{
    long n;
    std::cin >> n;
    
    long min, max, sum;
    std::cin >> sum;
    min = max = sum;
    for (size_t i = 1; i < n; i++)
    {
        long t;
        std::cin >> t;
        min = std::min(min, t);
        max = std::max(max, t);
        sum += t;
    }
    std::cout << std::fixed << std::setprecision(2)
              << (double)(sum - min - max) / (n - 2) 
              << std::endl;
    return 0;
}
