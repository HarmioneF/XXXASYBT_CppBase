#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int m;
    int max = 0, min = 10000;
    cin >> m;
    int n[m];
    memset(n, 0, sizeof(n));
    for (int i = 0; i < m; ++i)
        cin >> n[i];
    
    for (int i = 0; i < m; ++i) {
        if (n[i] > max)
            max = n[i];
        else if (n[i] < min)
            min = n[i];
    }

    cout << max - min << endl;
    return 0;
}
