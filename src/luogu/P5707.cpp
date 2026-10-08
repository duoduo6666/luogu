#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    int s, v, time;
    std::cin >> s >> v;
    time = 60*8 - (10 + (s + v - 1) / v);
    if (time < 0) {
        time += 60*24;
    }
    
    std::cout << std::setw(2) << std::setfill('0') << time/60 << ':';
    std::cout << std::setw(2) << std::setfill('0') << time%60 << std::endl;
    return 0;
}
