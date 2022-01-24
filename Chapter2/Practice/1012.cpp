#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {
    double x, a, b, c, d, e;

    cin >> x >> a >> b >> c >> d;
    e = a * pow(x, 3) + b * pow(x, 2) + c * x + d;

    cout << fixed << setprecision(7) << e << endl;

    return 0;
}
