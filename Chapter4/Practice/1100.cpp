#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sum = 0, k = 1;
    cin >> n;

    while (k <= n) {
        n -= k;
        sum += pow(k, 2);
        ++k;
    }
    sum += n * k;
    cout << sum << endl;
    return 0;
}