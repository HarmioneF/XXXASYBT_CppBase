#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double num;

    cin >> num;
    cout << fixed << setprecision(2) << abs(num) << endl;

    return 0;
}
