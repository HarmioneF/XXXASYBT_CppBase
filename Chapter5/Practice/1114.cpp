#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    int n, tx = 0, ti = 0;
    double x, max, min, sum = 0, ave;
    cin >> n;
    double a[n];
    memset(a, 0, sizeof(a));
    cin >> a[0];
    max = min = a[0];
    sum += a[0];

    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > max) {
            max = a[i];
            tx = i;
        } else if (a[i] < min) {
            min = a[i];
            ti = i;
        }
    }
    ave = (sum - max - min) / (n - 2);
    double maxave = 0;

    for (int i = 0; i < n; ++i) {
        if (i != tx && i != ti)
            if (maxave<fabs(a[i] - ave))
                maxave = fabs(a[i] - ave);
    }

    cout << fixed << setprecision(2) << ave << " " << maxave << endl;
    return 0;
}
