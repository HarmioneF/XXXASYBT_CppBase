#include <iostream>

using namespace std;

int main() {
    double a, b, c, max_num;

    cin >> a >> b >> c;
    if ((a > b) && (a > c)) {
        max_num = a;
    } else if ((b > a) && (b > c)) {
        max_num = b;
    } else
        max_num = c;

    cout << max_num << endl;
    return 0;
}
