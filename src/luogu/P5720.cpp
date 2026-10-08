#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    // 该代码经测试, 如果a大于2^32次幂, 可能由于浮点精度问题产生误差
    long a;
    std::cin >> a;
    std::cout << (long)std::log2(a) + 1 << std::endl;
    return 0;
}
