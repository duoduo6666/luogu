#include <iostream>

int main(int argc, char const *argv[])
{
    int m, t, s;
    std::cin >> m >> t >> s;
    if (t == 0 || m-((s+t-1)/t) < 0)
    {
        std::cout << 0 << std::endl;
        return 0;
    }
    std::cout << m-((s+t-1)/t) << std::endl;
    return 0;
}
