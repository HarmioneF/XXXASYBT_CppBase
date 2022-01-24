#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a;
    int x[a];
    for (int i = 0; i < a; ++i) {
        cin >> x[i];
    }
    cin >> b;

    for (int i = 0; i < a; ++i)
        if (x[i] == b)
            ++sum;

    cout << sum << endl;
    return 0;
}
