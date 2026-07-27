#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
    int p;
    std::cin >> p;
    switch (p)
    {
        case 1: {
            std::cout << "I love Luogu!" << std::endl;
            break;
        }
        case 2: {
            std::cout << 2+4 << ' ' << 10-2-4 << std::endl;
            break;
        }
        case 3: {
            std::cout << 14/4 << std::endl << 14/4*4 << std::endl << 14%4 << std::endl;
            break;
        }
        case 4: {
            std::cout << std::fixed << std::setprecision(3) << 500.0/3 << std::endl;
            break;
        }
        case 5: {
            std::cout << (260+220)/(12+20) << std::endl;
            break;
        }
        case 6: {
            std::cout << std::sqrt(9*9+6*6) << std::endl;
            break;
        }
        case 7: {
            int money = 100;
            money += 10;
            std::cout << money << std::endl;
            money -= 20;
            std::cout << money << std::endl;
            money -= money;
            std::cout << money << std::endl;
            break;
        }
        case 8: {
            std::cout << 2*3.141593*5 << std::endl;
            std::cout << 3.141593*5*5 << std::endl;
            std::cout << 4./3*3.141593*5*5*5 << std::endl;
            break;
        }
        case 9: {
            int peach = 1;
            for (size_t i = 0; i < 3; i++)
            {
                peach = (peach+1)*2;
            }
            std::cout << peach << std::endl;
            break;
        }
        case 10: {
            std::cout << 9 << std::endl;
            break;
        }
        case 11: {
            std::cout << 100./(8-5) << std::endl;
            break;
        }
        case 12: {
            std::cout << 'M' - 'A' + 1 << std::endl;
            std::cout << (char)('A' + 18 - 1) << std::endl;
            break;
        }
        case 13: {
            std::cout << (long)std::pow(4./3*3.141593*4*4*4 + 4./3*3.141593*10*10*10, 1./3) << std::endl;
            break;
        }
        case 14: {
            std::cout << (-120.+std::sqrt(120.*120-4*3500))/-2. << std::endl;
            break;
        }
    }
    return 0;
}
