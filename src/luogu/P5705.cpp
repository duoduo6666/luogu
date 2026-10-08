#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
    char s[5];
    std::cin >> s;
    std::reverse(std::begin(s), std::end(s));
    std::cout << s;
    return 0;
}
