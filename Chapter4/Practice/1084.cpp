#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b, n = 1;
    cin >> a >> b;

    for (int i = 0; i < b; i++) {
        n = n * a % 1000;
    }

    cout << setw(3) << setfill('0') << n << endl;
    return 0;
}
