#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double sgl, sum = 0, yz;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> sgl;
        sum += sgl;
    }
    yz = sum / n;

    cout << fixed << setprecision(4) << yz << endl;
    return 0;
}
