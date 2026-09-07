#include <iostream>

int main(int argc, char const *argv[])
{
    long N;
    std::cin >> N;

    long x = 100;
    for (; x > 0; x--)
    {
        // long k = 1;
        // for (; k < N; k++)
        // {
        //     long sum = 52 * (7 * x + 21 * k);
        //     if (sum == N)
        //     {
        //         std::cout << x << std::endl
        //                   << k << std::endl;
        //         return 0;
        //     }
        // }

        long k = (N - (52 * 7) * x) / (52 * 21);
        if ((N - (52 * 7) * x) % (52 * 21) == 0 && k > 0)
        {
            long k = (N - (52 * 7) * x) / (52 * 21);
            std::cout << x << std::endl
                      << k << std::endl;
            return 0;
        }
    }
    return -1;
}
