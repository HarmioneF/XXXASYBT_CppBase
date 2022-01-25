#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int a[n];
    int b[n];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }

    cout << sum << endl;
    return 0;
}
