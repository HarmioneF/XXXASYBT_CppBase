#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, i;
    cin >> a;
    for (i = 2; i < sqrt(a); ++i) {
        if (a % i == 0)
            cout << a / i << endl;
    }
    return 0;
}
