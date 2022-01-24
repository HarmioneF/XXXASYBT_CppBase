#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pw, price;

    cin >> pw;
    if (pw <= 20) {
        price = pw * 1.68;
        cout << fixed << setprecision(2) << price << endl;
    } else {
        price = pw * 1.98;
        cout << fixed << setprecision(2) << price << endl;
    }

    return 0;
}
