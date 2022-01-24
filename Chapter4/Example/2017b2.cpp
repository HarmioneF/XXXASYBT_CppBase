#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2)     // i的初始值为2，终值为n，每次增量为2
        cout << i << " ";               // 输出i的值
    return 0;
}
