#include <iostream>

using namespace std;

int main() {
    unsigned char ch;

    cin >> ch;
    int ASCII = (int)ch;
    if (ASCII % 2 == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}
