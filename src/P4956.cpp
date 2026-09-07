#include <iostream>

int main(int argc, char const *argv[])
{
    long N;
    std::cin >> N;

    long x = 100;
    for (; x > 0; x--)
    {
        long k = 1;
        for (; k < N; k++)
        {
            long sum_week = 7 * x + 21 * k;
            long sum = 52 * sum_week;
            if (sum == N)
            {
                std::cout << x << std::endl
                          << k << std::endl;
                return 0;
            }
        }
    }
    return -1;
}
