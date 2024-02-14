#include <iostream>

using namespace std;

int main()
{
    unsigned char X = 7;
    // 7 = 00000111
    // unsigned char X = 98;
    // 98 = 01100010
    // unsigned char X = 241;
    // 241 = 11110001

    int i;
    cin >> i;
    cout << (X | (1 << i - 1));

    return 0;
}
