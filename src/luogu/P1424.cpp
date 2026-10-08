#include <iostream>

int main(int argc, char const *argv[])
{
    int x, n;
    std::cin >> x >> n;
    long workday = n/7*5;
    for (n %= 7; n > 0; n--, x++)
    {
        if (x == 8) {
            x = 1;
        }
        if (x <= 5) {
            workday++;
        }
    }
    
    std::cout << (workday * 250) << std::endl;
    return 0;
}
