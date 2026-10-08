#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, max=0, max_day=0;
    for (size_t i=0; i < 7; i++)
    {
        std::cin >> a >> b;
        if (a+b > max && a+b > 8)
        {
            max = a+b;
            max_day = i+1;
        }
    }
    std::cout << max_day << std::endl;

    return 0;
}
