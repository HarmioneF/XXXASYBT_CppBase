#include <iostream>

using namespace std;

int main() {
    int n, a;
    int g, s, b, q;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        q = a / 1000;
        b = a / 100 % 10;
        s = a / 10 % 10;
        g = a % 10;

        if (g - s - b - q > 0)
            sum += 1;
    }

    cout << sum << endl;
    return 0;
}
