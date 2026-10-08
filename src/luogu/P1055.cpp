#include <iostream>

int main(int argc, char const *argv[])
{
    char isbn[13];
    long sum = 0, count = 1;
    for (size_t i = 0; i < 13; i++)
    {
        std::cin >> isbn[i];
        if (i != 1 && i != 5 && i < 11)
        {
            sum += (isbn[i] - '0') * count++;
        }
    }
    sum %= 11;
    
    if (isbn[12]-'0' == sum || (isbn[12] == 'X' && sum == 10))
    {
        std::cout << "Right" << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 12; i++)
        {
            std::cout << isbn[i];
        }
        if (sum == 10)
        {
            std::cout << 'X' << std::endl;
        }
        else
        {
            std::cout << sum << std::endl;
        }
    }
    
    return 0;
}
