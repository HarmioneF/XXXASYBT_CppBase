#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main() {
    double r, d, c, s;
    cin >> r;
    d = 2 * r;
    c = 2 * PI * r;     // 也可使用c = d * Pi;
    s = PI * pow(r, 2);
    cout << fixed << setprecision(4) << d << " " << c << " " << s << endl;
    return 0;
}
