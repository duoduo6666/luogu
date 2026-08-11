#include <iostream>

int main(int argc, char const *argv[])
{
    long n, x, count = 0;
    std::cin >> n >> x;
    for (size_t i = 1; i <= n; i++)
    {
        for (long t = i; t != 0; t /= 10)
        {
            if (t % 10 == x)
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}
