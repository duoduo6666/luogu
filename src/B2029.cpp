#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    int h, r;
    std::cin >> h >> r;
    double volume  = h*3.14*r*r;
    std::cout << (int)std::ceil(20000.0/volume) << std::endl;
    return 0;
}
