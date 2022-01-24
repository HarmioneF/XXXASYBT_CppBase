#include <iostream>

using namespace std;

int main() {
    int k, c, a = 1, b = 1;
    cin >> k;

    for (int i = 3; i <= k; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}
