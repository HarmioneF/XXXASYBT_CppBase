#include <iostream>
#include <cstring>

using namespace std;
int value[7];

int main() {
    int max = 0, day, a, b, flag = 0, z = 0;
    memset(value, 0, sizeof(value));
    for (int i = 0; i < 7; ++i) {
        cin >> a >> b;
        value[i] = a + b;
    }
    for (int i = 0; i < 7; ++i) {
        if (value[i] > max && value[i] > 8) {
            flag = 1;
            max = value[i];
            day = i + 1;
        }
    }

    if (!flag)
        cout << 0 << endl;

    cout << day << endl;
    return 0;
}
