#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if ((a[i] >= 0) && (a[i] <= 18))
            sum0 += 1;
        else if ((a[i] >= 19) && (a[i] <= 35))
            sum1 += 1;
        else if ((a[i] >= 36) && (a[i] <= 60))
            sum2 += 1;
        else
            sum3 += 1;
    }
    cout << fixed << setprecision(2);
    cout << sum0 / n * 100 << "%" << endl;
    cout << sum1 / n * 100 << "%" << endl;
    cout << sum2 / n * 100 << "%" << endl;
    cout << sum3 / n * 100 << "%" << endl;

    return 0;
}
