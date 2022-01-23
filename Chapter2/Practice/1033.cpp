#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xa, ya, xb, yb;
    double ans;

    cin >> xa >> ya;
    cin >> xb >> yb;
    ans = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));

    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}
