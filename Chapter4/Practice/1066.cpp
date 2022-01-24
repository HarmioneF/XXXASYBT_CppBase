#include <iostream>

using namespace std;

int main() {
    int n, m, sum = 0;
    cin >> n >> m;

    for (int i = n; i <= m; i++) {
        if (i % 17 == 0)
            sum += i;
    }

    cout << sum << endl;
    return 0;
}
