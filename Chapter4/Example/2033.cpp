#include <iostream>

using namespace std;

int main() {
    int n;
    long long sum = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        long long x = 1;
        for (int j = 1; j <= i; ++j)
            x *= j;
        sum += x;
    }

    cout << sum % 1000000 << endl;
    return 0;
}
