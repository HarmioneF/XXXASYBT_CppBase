#include <iostream>

using namespace std;

int main() {
    int a = 1, t = 0, n;
    cin >> n;

    do {
        ++t;
        a = (a * 92) % 100;
    } while (t != n);

    cout << a << endl;
    return 0;
}
