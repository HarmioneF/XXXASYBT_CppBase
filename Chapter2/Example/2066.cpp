#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, m, xj, ss;

    cin >> n >> m;
    xj = m * 0.8;
    ss = n - xj;

    cout << fixed << setprecision(2) << ss << endl;
    return 0;
}
