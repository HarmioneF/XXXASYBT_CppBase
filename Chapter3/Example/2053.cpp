#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c, temp;

    cin >> a >> b >> c;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
