#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<long, 3> n, output;
    for (size_t i = 0; i < 3; i++)
    {
        std::cin >> n[i];
    }
    std::sort(n.begin(), n.end());
    for (size_t i = 0; i < 3; i++)
    {
        char t;
        std::cin >> t;
        output[i] = n[t-'A'];
        std::cout << n[t-'A'] << ' ';
    }

    std::cout << std::endl;
    return 0;
}
