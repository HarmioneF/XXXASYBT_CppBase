#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double z, ans = 0, f = -1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        f *= -1;
        ans += f * 1.0 / i;
    }

    cout << fixed << setprecision(4) << ans << endl;
    return 0;
}
