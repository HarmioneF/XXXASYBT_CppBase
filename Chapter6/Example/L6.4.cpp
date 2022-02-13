#include <iostream>

using namespace std;
bool check(int, int);

int main() {
    int a, b;
    cin >> a >> b;
    if (check(a, b))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}

bool check (int n, int d) {
    while (n) {
        int e = n % 10;
        n /= 10;
        if (e == d)
            return true;
    }
    return false;
}
