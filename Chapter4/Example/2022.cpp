#include <iostream>

using namespace std;

int main() {
    int i = 1, m;
    cin >> m;
    double sum = 0;

    while (sum < m) {
        sum += 1.0 / i;
        i++;
    }

    cout << --i << endl;
    return 0;
}
