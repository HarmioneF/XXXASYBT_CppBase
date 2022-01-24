#include <iostream>

using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        for (int j = i; j > 0; j /= 10) {
            if (j % 10 == 1)
                sum += 1;
        }
    }

    cout << sum << endl;
    return 0;
}
