#include <iostream>

using namespace std;

int main() {
    int n, t, maxn, minn, max_kdz;

    cin >> n >> t;
    maxn = t;
    minn = t;

    for (int i = 2; i <= n; i++) {
        cin >> t;
        if (t > maxn)
            maxn = t;
        else if (t < minn)
            minn = t;
    }

    max_kdz = maxn - minn;
    cout << max_kdz << endl;
    return 0;
}
