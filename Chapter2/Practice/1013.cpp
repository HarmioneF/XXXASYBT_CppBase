#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double C, F;
    cin >> F;
    C = 5 * (F - 32) / 9;

    cout << fixed << setprecision(5) << C << endl;
    return 0;
}
