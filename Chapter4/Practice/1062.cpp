#include <iostream>

using namespace std;

int main() {
    int n, t, maxn;

    cin >> n >> t;
    maxn = t;
    for (int i = 2; i <= n; i++) {
        cin >> t;
        if (t > maxn)
            maxn = t;
    }

    cout << maxn << endl;
    return 0;
}
