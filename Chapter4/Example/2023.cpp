#include<cstdio>

using namespace std;

int main() {
    int x, n = 0, min = 1000, max = -9999;
    double s = 0;

    while (scanf("%d", &x) == 1) {
        s = s + x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
        n++;
    }

    printf("%d %d %.3f", min, max, s / n);
    return 0;
}
