#include <iostream>

using namespace std;

int main() {
    int n, gp, sp, cp;
    int gs = 0, ss = 0, cs = 0, ps = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> gp >> sp >> cp;
        gs += gp;
        ss += sp;
        cs += cp;
        ps += gp + sp + cp;
    }

    cout << gs << " " << ss << " " << cs << " "  << ps << endl;
    return 0;
}
