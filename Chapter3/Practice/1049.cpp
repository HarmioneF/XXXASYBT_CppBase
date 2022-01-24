#include <iostream>

using namespace std;

int main() {
    int mday, status;
    cin >> mday;

    if (mday == 1 || mday == 3 || mday == 5)
        status = 0;
    else
        status = 1;

    if (status == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
