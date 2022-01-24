#include <iostream>

using namespace std;

int main() {
    int a, b, sum, n_sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0)
            n_sum += i;
    }

    cout << n_sum << endl;
    return 0;
}
