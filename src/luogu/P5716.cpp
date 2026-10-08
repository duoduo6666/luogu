#include <iostream>

int main(int argc, char const *argv[])
{
    int year, month, day;
    int month_days[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    std::cin >> year >> month;
    day = month_days[month-1]; 
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        day = 29;
    }
    std::cout << day << std::endl;
    return 0;
}
