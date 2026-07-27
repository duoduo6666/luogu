#include <iostream>

int main(int argc, char const *argv[])
{
    int x;
    std::cin >> x;
    std::cout << ((x%2==0) && (x>4) && (x<=12)) << ' ';
    std::cout << (((x%2==0) + (x>4 && x<=12)) > 0) << ' ';
    std::cout << (((x%2==0) + (x>4 && x<=12)) == 1) << ' ';
    std::cout << (!(x%2==0) && !(x>4 && x<=12)) << std::endl;
    return 0;
}
