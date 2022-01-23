#include <iostream>

using namespace std;

int main() {
    int c, r, h, f;
    cin >> h >> f;
    r = (f - 2 * h) / (4 - 2);
    c = h - r;

    cout << c << " " << r << endl;
    return 0;
}
