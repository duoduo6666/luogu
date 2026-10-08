#include <iostream>
#include <vector>
#include <cstdint>
#include <string>
#include <algorithm>

class BigUInt
{
private:
    std::vector<uint32_t> value;

public:
    BigUInt(uint32_t x = 0)
    {
        value.push_back(x);
    }
    BigUInt &operator+=(const BigUInt &bigint)
    {
        uint32_t carry = 0;
        uint64_t sum;
        size_t i = 0;
        while (i < value.size() || i < bigint.value.size() || carry)
        {
            sum = carry;
            if (i < bigint.value.size())
            {
                sum += bigint.value[i];
            }
            if (i < value.size())
            {
                sum += value[i];
                value[i] = sum;
            }
            else
            {
                value.push_back(sum);
            }
            carry = sum >> 32;
            i++;
        }
        return *this;
    }
    BigUInt &operator*=(const uint32_t num)
    {
        uint64_t result;
        uint32_t carry = 0;
        size_t value_size = value.size();
        for (size_t i = 0; i < value_size; i++)
        {
            result = (uint64_t)value[i] * num + carry;
            value[i] = result;
            carry = result >> 32;
        }
        if (carry)
        {
            value.push_back(carry);
        }
        return *this;
    }
    friend std::ostream &operator<<(std::ostream &os, const BigUInt &num)
    {
        std::string result;
        std::vector<uint32_t> value = num.value;
        uint64_t t, m = 0;
        while (value.size() != 0)
        {
            m = 0;
            for (long i = value.size() - 1; i >= 0; i--)
            {
                t = (m << 32) | value[i];
                value[i] = t / 10;
                m = t % 10;
            }
            result.push_back('0'+m);
            if (value[value.size()-1] == 0)
            {
                value.pop_back();
            }
        }
        std::reverse(result.begin(), result.end());
        os << result;
        return os;
    }
};

int main(int argc, char const *argv[])
{
    BigUInt vec = 1, sum = 0;
    long n;
    std::cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        vec *= i;
        sum += vec;
    }
    
    std::cout << sum << std::endl;
    return 0;
}
