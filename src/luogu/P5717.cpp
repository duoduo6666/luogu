#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>
int main(int argc, char const *argv[])
{
    std::array<int, 3> x;
    for (int &i : x)
    {
        std::cin >> i;
    }
    std::sort(x.begin(), x.end());
    if (x[0] + x[1] <= x[2])
    {
        std::cout << "Not triangle" << std::endl;
        return 0;
    } 
    else if (x[0]*x[0] + x[1]*x[1] == x[2]*x[2])
    {
        std::cout << "Right triangle" << std::endl;
    }
    else if (x[0]*x[0] + x[1]*x[1] > x[2]*x[2])
    {
        std::cout << "Acute triangle" << std::endl;
    }
    else if (x[0]*x[0] + x[1]*x[1] < x[2]*x[2])
    {
        std::cout << "Obtuse triangle" << std::endl;
    }
    if (x[0] == x[1] || x[0] == x[2] || x[1] == x[2])
    {
        std::cout << "Isosceles triangle" << std::endl;
    }
    if (x[0] == x[1] && x[1] == x[2])
    {
        std::cout << "Equilateral triangle" << std::endl;
    }
    return 0;
}
