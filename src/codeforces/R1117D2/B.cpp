#include <iostream>
#include <vector>
#include <algorithm>

int exe_case()
{
    long n, m;
    std::cin >> n >> m;
    
    std::vector<int> bee_m, ver_m;
    for (size_t i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        bee_m.push_back(t);
    }
    bee_m.push_back(0);
    bee_m.push_back(2);
    for (size_t i = 0; i < m; i++)
    {
        int t;
        std::cin >> t;
        ver_m.push_back(t);
    }
    ver_m.push_back(0);
    ver_m.push_back(2);

    long bee = 0, ver = 0;
    while (1)
    {
        long min = std::min(ver_m[ver] - ver_m[ver+1] - 1, bee_m[bee] - bee_m[bee+1] - 1);
        min = std::max(min, (long)1);
        // bee
        ver_m[ver] -= min;
        if (bee_m[bee] + 1 == bee_m[bee+1]) bee++;
        if (bee_m[bee] == 0 && bee_m[bee+1] != 1) return 2;
        
        // ver
        bee_m[bee] -= min;
        if (ver_m[ver] + 1 == ver_m[ver+1]) ver++;
        if (ver_m[ver] == 0 && ver_m[ver+1] != 1) return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    long case_num;
    std::cin >> case_num;
    bool result = true;
    for (size_t i = 0; i < case_num; i++)
    {
        std::cout << exe_case() << std::endl;
    }
    return 0;
}
