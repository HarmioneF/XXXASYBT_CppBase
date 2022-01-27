#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m, max = 0, sum = 0;
    cin >> m;
    int n[m];
    memset(n, 0, sizeof(m));
    for (int i = 0; i < m; ++i) {
        cin >> n[i];
        if (n[i] > max)
            max = n[i];
    }
    for (int i = 0; i < m; ++i) {
        if (n[i] != max)
            sum += n[i];
    }

    cout << sum << endl;
    return 0;
}
