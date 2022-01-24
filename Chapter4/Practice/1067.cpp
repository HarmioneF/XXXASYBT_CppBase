#include <iostream>

using namespace std;

int main() {
    int k, a, t1 = 0, t5 = 0, t10 = 0;

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a;
        if (a == 1) {
            t1 += 1;
        } else if (a == 5) {
            t5 += 1;
        } else if (a == 10) {
            t10 += 1;
        }
    }

    cout << t1 << endl << t5 << endl << t10 << endl;
    return 0;
}
