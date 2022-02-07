#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m, fmax = 0;
    cin >> m;
    int n[m];
    memset(n, 0, sizeof(n));
    for (int i = 0; i < m; ++i) {
        cin >> n[i];
        if (n[i] > fmax)
            fmax = n[i];
    }

    int num = 0;
    for (int i = 0; i <= fmax; ++i) {
        for (int j = 0; j < m; j++)
            if (n[j] == i)
                ++num;
        cout << num << endl;
        num = 0;
    }
    return 0;
}
