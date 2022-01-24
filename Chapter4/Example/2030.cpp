#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        bool x = true;
        for (int j = 2; pow(j, 2) <= i; ++j) {
            if (i % j == 0) {
                x = false;
                break;
            }
        }

        if (x && i != 1) {
            cout << i << endl;
        }
    }

    return 0;
}
