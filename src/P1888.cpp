#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

long get_gcd(long a, long b)
{
    long t;
    while (b)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    std::array<long, 3> a;
    long gcd;

    std::cin >> a[0] >> a[1] >> a[2];
    std::sort(a.begin(), a.end());
    gcd = get_gcd(a[0], a[2]);
    std::cout << a[0]/gcd << '/' << a[2]/gcd << std::endl;
    return 0;
}
