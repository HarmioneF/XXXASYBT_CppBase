#include <iostream>

using namespace std;

int main() {
    int c, m;
    cin >> c >> m;

    if ((c >= 60) && (m >= 60) or (c <= 60) && (m <= 60))
        cout << "0" << endl;
    else
        cout << "1" << endl;
}
