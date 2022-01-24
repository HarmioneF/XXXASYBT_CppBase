#include <iostream>

using namespace std;

int main() {
    int m, sum = 0;
    cin >> m;

    for (int i = 1; i <= m; i++) {
        sum += i;
        if (sum >= m) {
            cout << i << endl;
            break;
        } else
            continue;
    }

    return 0;
}
