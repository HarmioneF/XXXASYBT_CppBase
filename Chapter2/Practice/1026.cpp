#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char a;
    int b;
    float c;
    double d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << a << " " << b << " " << fixed << setprecision(6) << c << " " << d << endl;

    return 0;
}
