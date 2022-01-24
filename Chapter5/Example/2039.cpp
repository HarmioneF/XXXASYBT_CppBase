#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n - 1; ++i)
        for (int j = 1; j <= n - i; ++j)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);

    for (int i = 1; i <= n; ++i)
        cout << a[i] << endl;
    cout << endl;
    return 0;
}
