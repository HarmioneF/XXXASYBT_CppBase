#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            cout << n * 2 << "/2=" << n << endl;
        } else {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
    }

    cout << "End" << endl;
    return 0;
}
