#include <iostream>
#include <cmath>

bool isPrime(long x)
{
    if (x < 2) return false;
    for (size_t i = 2; i * i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    long a, b;
    std::cin >> a >> b;

    long min_length = 0, max_length = 0;
    for (size_t i = a; i > 0; i /= 10)
    {
        min_length++;
    }
    for (size_t i = b; i > 0; i /= 10)
    {
        max_length++;
    }
    
    for (size_t length = min_length; length <= max_length; length++)
    {
        size_t half_length = (length+1)/2;
        long min = 1 * (long)pow(10, half_length-1);
        long max = 1 * (long)pow(10, half_length)-1;
        for (size_t half = min; half <= max; half++)
        {
            long x = half * (long)pow(10, length/2);
            for (size_t i = 0; i < length/2; i++)
            {
                x += ((half / (long)powl(10, half_length-1-i)) % 10) * (long)pow(10, i);
            }
            if (isPrime(x) && x >= a && x <= b)
            {
                std::cout << x << std::endl;
            }
        }
    }
    return 0;
}
