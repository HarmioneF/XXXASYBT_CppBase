#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    cout << fixed << setprecision(4) << (double) (x * 87 + y * 85) / (x + y) << endl;
    return 0;
}
