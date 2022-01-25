#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 1; --i) {
        cout << a[i] << " ";
    }
    cout << a[0] << endl;
    return 0;
}
