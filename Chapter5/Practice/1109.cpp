#include <iostream>
#include <cstring>

using namespace std;
bool a[5001];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 2; i <= m; ++i)
        for (int j = i; j <= n; j += i)
            a[j] = !a[j];
    
    cout << 1;
    for (int i = 2; i <= n; ++i)
        if (!a[i])
            cout << "," << i;
    return 0;
}
