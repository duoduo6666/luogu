#include <iostream>

int main(int argc, char const *argv[])
{
    int apple;
    std::cin >> apple;
    std::cout << "Today, I ate " << apple << " apple";
    if (apple > 1)
    {
        std::cout << 's';
    }
    std::cout << '.' << std::endl;
    return 0;
}
