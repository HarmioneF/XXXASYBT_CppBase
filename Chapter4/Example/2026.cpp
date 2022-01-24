#include <iostream>

using namespace std;

int main() {
    int S = 0, n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int fac = 1;
        for (int j = 1; j <= i; ++j) {
            fac *= j;
        }
        S += fac;
    }

    cout << S << endl;
    return 0;
}
