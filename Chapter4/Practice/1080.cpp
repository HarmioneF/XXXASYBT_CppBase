#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int x = 2;
    cin >> a >> b >> c;

    while (x){
        if (a % x == b % x && b % x == c % x) {
            break;
        } else {
            x++;
        }
    }

    cout << x << endl;
    return 0;
}
