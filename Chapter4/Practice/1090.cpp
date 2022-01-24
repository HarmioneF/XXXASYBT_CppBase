#include <iostream>

using namespace std;

int main() {
    int m, k, n, w, t = 0;
    cin >> m >> k;
    n = m;

    while (n) {
        w = n % 10;
        if (w == 3)
            ++t;
        n /= 10;
    }

    if (m % 19 == 0 && t == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
