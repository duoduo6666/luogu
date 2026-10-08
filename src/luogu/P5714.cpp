#include <iostream>

int main(int argc, char const *argv[])
{
    double m, h, bmi;
    std::cin >> m >> h;
    bmi = m/(h*h);
    if (bmi < 18.5)
    {
        std::cout << "Underweight" << std::endl;
    }
    else if (bmi < 24)
    {
        std::cout << "Normal" << std::endl;
    }
    else
    {
        std::cout << bmi << std::endl;
        std::cout << "Overweight" << std::endl;
    }
    return 0;
}
