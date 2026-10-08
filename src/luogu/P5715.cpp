#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char const *argv[])
{
    std::array<int, 3> a;
    // std::cin >> a[0] >> a[1] >> a[2];
    for (int &i : a)
    {
        std::cin >> i;   
    }
    
    std::sort(a.begin(), a.end());

    //std::cout << a[0] << ' ' << a[1] << ' ' << a[2] << std::endl;
    for (size_t i = 0; i < a.size()-1; i++)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << a[a.size()-1] << std::endl;

    return 0;
}
