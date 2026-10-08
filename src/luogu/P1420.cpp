#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    long n;
    std::cin >> n;

    long x, count = 1, max_count = 1;
    std::cin >> x;
    for (size_t i = 1; i < n; i++)
    {
        long t;
        std::cin >> t;
        if (t == x + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        max_count = std::max(max_count, count);
        x = t;
    }
    std::cout << max_count << std::endl;
    return 0;
}
