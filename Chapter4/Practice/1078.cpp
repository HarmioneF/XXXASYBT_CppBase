#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double a = 2, b = 1, s = 2, t;

    cin >> n;
    for (int i = 2; i <= n; i++) {
        t = a;
        a += b;
        b = t;
        s += a / b;
    }

    cout << fixed << setprecision(4) << s << endl;
    return 0;
}
