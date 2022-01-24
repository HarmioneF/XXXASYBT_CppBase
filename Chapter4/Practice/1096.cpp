#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        for (int j = i; j > 0; j /= 10) {
            if (j % 10 == 2)
                sum += 1;
        }
    }

    cout << sum << endl;
    return 0;
}
