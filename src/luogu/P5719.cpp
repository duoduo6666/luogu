#include <iostream>
#include <iomanip>
int main(int argc, char const *argv[])
{
    long n, k, sum_a = 0, sum_b = 0, count_a = 0, count_b = 0;
    std::cin >> n >> k;
    for (size_t i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum_a += i;
            count_a++;
        }
        else
        {
            sum_b += i;
            count_b++;
        }
    }
    std::cout << std::fixed << std::setprecision(1) << (double)sum_a / count_a << ' ';
    std::cout << std::fixed << std::setprecision(1) << (double)sum_b / count_b << std::endl;
    return 0;
}
