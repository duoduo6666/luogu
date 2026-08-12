#include <iostream>

bool isPrime(long x)
{
    if (x < 2)
    {
        return false;
    }

    for (size_t i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    long L, sum = 0, count = 0;
    std::cin >> L;
    for (size_t i = 2; ; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            if (sum <= L)
            {
                count++;
                std::cout << i << std::endl;
            }
            else
            {
                break;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
