#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool prime[n + 1];

    memset(prime, 1, sizeof(prime));
    prime[1] = false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (prime[i])
            for (int j = 2; j <= n / i; ++j)
                prime[i * j] = false;
    for (int i = 2, t = 0; i <= n; ++i)
        if (prime[i]) {
            cout << i << endl;
            ++t;
        }
    return 0;
}
