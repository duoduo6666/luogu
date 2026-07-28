#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int x;
    double price = 0;
    std::cin >> x;
    if (x > 400)
    {
        price += (x-400) * 0.5663;
        x = 400;
    }
    if (x > 150)
    {
        price += (x-150) * 0.4663;
        x = 150;
    }
    price += x * 0.4463;
    std::cout << std::fixed << std::setprecision(1) << price << std::endl;
    return 0;
}
