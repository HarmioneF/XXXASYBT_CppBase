#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    char op;
    cin >> a >> b >> op >> c;

    if (c == 1) {
        for (int i = 1; i <= a; ++i) {
            for (int j = 1; j <= b; ++j)
                cout << op;
            cout << endl;
        }
    } else {
        for (int i = 1; i <= b; ++i) {
            cout << op;
        }
        cout << endl;
        for (int j = 1; j <= a - 2; ++j) {
            cout << op;
            for (int k = 1; k <= b - 2; ++k)
                cout << " ";
            cout << op << endl;
        }
        for (int i = 1; i <= b; ++i)
            cout << op;
    }

    return 0;
}
