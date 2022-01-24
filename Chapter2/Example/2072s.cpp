#include <cstdio>

using namespace std;

int main() {
    int pa = 6;
    int po = 5;
    int pohl = 4;

    double sc_a = 9.6 * pa;
    double sc_o_h = 9.4 * po;
    double sc_o_l = 9.8 * po;
    double sc_high = sc_a - sc_o_h;
    double sc_low = sc_a - sc_o_l;

    double ans = (sc_a - sc_high - sc_low) / pohl;
    printf("%5.2f\n", ans);

    return 0;
}
