#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r1, r2, ans;

    cin >> r1 >> r2;
    ans = 1.0 / ((1.0 / r1) + (1.0 / r2));

    cout << fixed << setprecision(2) << ans << endl;

    return 0;
}
