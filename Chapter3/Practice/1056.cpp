#include<iostream>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a >= -1 && a <= 1 && b >= -1 && b <= 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
