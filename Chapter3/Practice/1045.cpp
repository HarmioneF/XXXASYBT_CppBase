#include <iostream>

using namespace std;

int main() {
    int x, y;
    int status0 = 1, status1 = 0;

    cin >> x >> y;
    if (x >= 10)
        cout << status0 << endl;
    else if (y >= 20)
        cout << status0 << endl;
    else
        cout << status1 << endl;

    return 0;
}
