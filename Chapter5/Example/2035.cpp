#include <iostream>

const int n = 10;

using namespace std;

int a[n];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n - 1; ++i)
        cin >> a[i];
    int temp = a[0];
    for (int i = 0; i <= n - 1; ++i)
        a[i] = a[i + 1];
    a[n - 1] = temp;
    for (int i = 0; i <= n - 1; ++i)
        cout << a[i] << " ";

    return 0;
}
