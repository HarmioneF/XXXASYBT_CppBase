#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, ans;

    cin >> a >> b;
    ans = a / b * 1.0;

    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}
