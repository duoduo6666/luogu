#include <iostream>

int main(int argc, char const *argv[])
{
    long N;
    std::cin >> N;

    long x = 0;
    while (N)
    {
        x *= 10;
        x += N % 10;
        N /= 10;
    }
    std::cout << x << std::endl;
    return 0;
}
