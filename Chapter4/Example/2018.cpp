#include <iostream>

using namespace std;

int main() {
    int n;
    int js_sum = 0, os_sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            os_sum += i;
        else
            js_sum += i;
    }

    cout << os_sum << " " << js_sum << endl;

    return 0;
}
