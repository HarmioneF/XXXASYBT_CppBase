#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b;
    c = b / a;

    cout << fixed << setprecision(3) << c * 100 << "%" << endl;
    return 0;
}
