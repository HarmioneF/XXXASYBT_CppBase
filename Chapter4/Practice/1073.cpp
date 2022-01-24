#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    double x, y, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y >> m;
        ans += sqrt(pow(x, 2) + pow(y, 2)) / 25.0 + 1.5 * m;
    }
    cout << ceil(ans);
    return 0;
}
