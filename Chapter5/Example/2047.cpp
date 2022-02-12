#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char st[201];
    cin.getline(st, 200);
    int lens = strlen(st), space_num = 0;
    for (int i = 0; i < lens; ++i) {
        if (st[i] == ' ')
            space_num += 1;
        else
            space_num = 0;
        if (st[i] != ' ' || space_num == 1)
            cout << st[i];
    }
    return 0;
}
