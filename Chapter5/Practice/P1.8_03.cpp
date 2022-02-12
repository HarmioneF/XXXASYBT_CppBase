#include<iostream>

using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x >> y;
    int a[x + 1][y + 1];
    for (int i = 1; i <= x; ++i)
        for (int j = 1; j <= y; ++j){
            cin >> a[i][j];
            if (i == 1 || j == 1 || i == x || j == y)
                sum += a[i][j];
        }
    cout << sum << endl;
    return 0;
}
