#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double Xa, Xb, Xc, Ya, Yb, Yc, A, B, C, p, S;

    cin >> Xa >> Ya;
    cin >> Xb >> Yb;
    cin >> Xc >> Yc;
    A = sqrt(pow(Xa - Xb, 2) + pow(Ya - Yb, 2));
    B = sqrt(pow(Xb - Xc, 2) + pow(Yb - Yc, 2));
    C = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));
    p = (A + B + C) / 2;
    S = sqrt(p * (p - A) * (p - B) * (p - C));

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
