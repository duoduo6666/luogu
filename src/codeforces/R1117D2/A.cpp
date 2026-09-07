#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool exe_case()
{
    bool result = true;
    long n, m;
    std::cin >> n >> m;
    
    std::vector<char> first_c;
    for (size_t i = 0; i < n; i++)
    {
        std::string str;
        std::cin >> str;
        first_c.push_back(str[0] - 32);
    }
    
    for (size_t i = 0; i < m; i++)
    {
        
        std::string str;
        std::cin >> str;
        for (char c : str)
        {
            if (std::find(first_c.begin(), first_c.end(), c) == first_c.end())
            {
                result = false;
            }
        }
    }
    
    return result;
}

int main(int argc, char const *argv[])
{
    long case_num;
    std::cin >> case_num;
    bool result = true;
    for (size_t i = 0; i < case_num; i++)
    {
        if (exe_case())
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
