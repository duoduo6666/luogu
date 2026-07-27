#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, c, d, spend;
    std::cin >> a >> b >> c >> d;
    spend = (c*60 + d) - (a*60 + b);
    std::cout << spend/60 << ' ' << spend%60 << std::endl;
    return 0;
}
