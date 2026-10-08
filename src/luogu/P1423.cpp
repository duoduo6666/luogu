#include <iostream>

int main(int argc, char const *argv[])
{
    double s;
    std::cin >> s;

    double speed = 2;
    long count = 0;
    while (s > 0)
    {
        s -= speed;
        count++;
        speed *= 0.98;
    }
    std::cout << count << std::endl;
    return 0;
}
