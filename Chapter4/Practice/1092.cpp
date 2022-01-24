#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 1;
    long double e = 1;

    for (int i = 1; i <= n; ++i) {
        sum *= i;
        e += 1.0 / (double) sum;        // 累加
    }

    cout << fixed << setprecision(10) << e << endl;
    return 0;
}
