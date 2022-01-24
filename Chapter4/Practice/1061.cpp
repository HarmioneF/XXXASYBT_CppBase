#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, a, sum = 0;
    double so;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        sum += a;
    }
    so = (double) sum / n;

    cout << sum << " " << fixed << setprecision(5) << so << endl;
    return 0;
}
