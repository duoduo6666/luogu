#include <iostream>

int main(int argc, char const *argv[])
{
    int year;
    std::cin >> year;
    std::cout << (year%4==0 && year%100!=0 || year%400==0) << std::endl;
    return 0;
}
