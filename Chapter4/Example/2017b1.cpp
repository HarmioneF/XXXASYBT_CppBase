#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        /* 本质上就是穷举思想，所有可能性都可以判断到，不会丢解。但是又是效率偏低 */
        if (i % 2 == 0) cout << i << " ";

    return 0;
}
