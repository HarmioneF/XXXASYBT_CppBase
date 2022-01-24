#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x, n, sum = 1, t = 1;
    cin >> x >> n;

    for (int i = 1; i <= n; ++i) {
        t *= x;
        sum += t;
    }

    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
