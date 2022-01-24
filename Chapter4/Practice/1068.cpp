#include <iostream>

using namespace std;

int main() {
    int N, m, a, sum = 0;
    cin >> N >> m;

    for (int i = 0; i < N; i++) {
        cin >> a;
        if (a == m)
            sum += 1;
    }

    cout << sum << endl;
    return 0;
}
