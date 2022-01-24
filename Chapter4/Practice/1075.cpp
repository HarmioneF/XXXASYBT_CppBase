#include <iostream>

using namespace std;

int main() {
    int m, n, a, sum = 0, cant = 0;
    cin >> m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (m - a >= 0) {
            sum += 1;
            m -= a;
        } else
            cant += 1;
    }

    cout << cant << endl;
    return 0;
}
