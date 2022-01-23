#include <iostream>

using namespace std;

int main() {
    double a, b, r, k;

    cin >> a >> b;
    k = int(a / b);
    r = a - k * b;

    cout << r << endl;
    return 0;
}
