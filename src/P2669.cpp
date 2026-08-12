#include <iostream>

int main(int argc, char const *argv[])
{
    long k, sum = 0;
    std::cin >> k;
    long t = 1, rem_day = 1;
    for (size_t i = 0; i < k; i++)
    {
        sum += t;
        if (--rem_day == 0) {
            t++;
            rem_day = t;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
