#include <iostream>
#include <cstring>

using namespace std;
int a[10];

int main() {
    int maxl, sum = 0;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 10; ++i)
        cin >> a[i];
    cin >> maxl;

    for (int i = 0; i < 10; ++i)
        if (a[i] <= maxl + 30)
            ++sum;

    cout << sum << endl;
    return 0;
}
