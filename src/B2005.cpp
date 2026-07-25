#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    int space_num = 2;
    int char_num = 1;
    for (int row = 0; row < 3; row++)
    {
        for (int i = 0; i < space_num; i++)
        {
            cout << ' ';
        }
        space_num -= 1;
        for (int i = 0; i < char_num; i++)
        {
            cout << c;
        }
        char_num += 2;
        cout << endl;
    }
    return 0;
}
