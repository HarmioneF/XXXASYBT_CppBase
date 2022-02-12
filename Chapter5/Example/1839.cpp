#include <iostream>
#include <cstring>

using namespace std;
int a[101], qizhong[101], banji[101], wenzhang[101];
string name[101];
char ganbu[101], xibu[101];

int main() {
    int n, max = -1, sum = 0;
    string people;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> name[i] >> qizhong[i] >> banji[i] >> ganbu[i] >> xibu[i] >> wenzhang[i];
        if (qizhong[i] > 80 && wenzhang[i] >= 1)
            a[i] += 8000;
        if (qizhong[i] > 85 && banji[i] > 80)
            a[i] += 4000;
        if (qizhong[i] > 90)
            a[i] += 2000;
        if (qizhong[i] > 85 && xibu[i] == 'Y')
            a[i] += 1000;
        if (banji[i] > 80 && ganbu[i] == 'Y')
            a[i] += 850;
        if (a[i] > max)//最多的钱
        {
            max = a[i];
            people = name[i];
        }
        sum += a[i];
    }
    cout << people << endl << max << endl << sum << endl;
    return 0;
}
