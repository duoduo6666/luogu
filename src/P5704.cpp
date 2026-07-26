#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    cin >> c;
    cout << (char)(c-('a'-'A')) << endl;
    return 0;
}
