#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

using namespace std;

int main() {
    double r, d, c, s;

    cin >> r;
    d = 2 * r;
    c = 2 * PI * r;
    s = PI * pow(r, 2);

    cout << fixed << setprecision(4) << d << " " << c << " " << s << endl;

    return 0;
}
