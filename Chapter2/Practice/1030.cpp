#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    double r, V;
    cin >> r;
    V = (double)4 / (double)3 * PI * pow(r, 3);

    cout << fixed << setprecision(2) << V << endl;
    return 0;
}
