#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, a, sum = 0;
    cin >> n;
    for (int t = 1; t <= n; t++) {
        cin >> a;
        sum += a;
    }

    double o = double(sum) / double(n);
    cout << fixed << setprecision(2) << o << endl;

    return 0;
}
