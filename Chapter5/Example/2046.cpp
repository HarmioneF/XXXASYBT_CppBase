#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char yw[201], a, b;
    int i, n = 0;

    while ((yw[n++]=getchar()) != '\n');
    a = getchar();
    getchar();              // 中间的getchar读取用户输入的空格
    b = getchar();

    for (i = 0; i < n; i++) {
        if (yw[i] == a)
            cout << b;
        else
            cout << yw[i];
    }

    cout << endl;
    return 0;
}
