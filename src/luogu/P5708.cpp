#include <iostream>
#include <iomanip>
#include <cmath>
int main(int argc, char const *argv[])
{
    float a, b, c, p;
    std::cin >> a >> b >> c;
    p = (a+b+c)/2;
    std::cout << std::fixed << std::setprecision(1) << std::sqrt(p*(p-a)*(p-b)*(p-c)) << std::endl;
    return 0;
}
