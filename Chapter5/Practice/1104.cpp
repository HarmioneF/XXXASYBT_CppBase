#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
double a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
int b[10];

int main() {
    double sum = 0;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < 10; ++i) {
        cin >> b[i];
        sum += b[i] * a[i];
    }

    cout << fixed << setprecision(1) << sum << endl;
    return 0;
}
