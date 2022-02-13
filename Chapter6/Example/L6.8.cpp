//TODO: Fix the cout.
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void TurnData(int n, int a);

char ch[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

int main() {
    int n;
    cin >> n;
    TurnData(n, 2);             // n转成2进制
    TurnData(n, 8);             // n转成8进制
    TurnData(n, 16);            // n转成16进制
    return 0;
}

void TurnData(int n, int a) {
    int x[17], i, j, k = 0;
    cout << n << "turn into" << a << " :" << endl;
    if (n < 0)
        cout << "-";
    j = abs(n);
    do {
        k++;
        i = j % a;
        j /= a;
        x[k] = i;
    } while (j != 0);
    for (int h = k; h >= 1; --k) {
        if (x[h] < 10) cout << x[h];
        else cout << ch[x[h] - 10];
    }
    cout << endl;
}
