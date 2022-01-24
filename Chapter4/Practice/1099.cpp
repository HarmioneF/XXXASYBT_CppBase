#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, x = 0, i, j;
    cin >> n;

    for (i = 2;; ++i) {
        for (j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > sqrt(i))
            x++;
        if (x == n)
            break;
    }

    cout << i << endl;
    return 0;
}
