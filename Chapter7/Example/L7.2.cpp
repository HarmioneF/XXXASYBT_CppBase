#include <iostream>
#include <cstring>

using namespace std;

struct student {
    string name;
    int chinese{}, math{};
    int total{};
};

student a[110];
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {               // 对结构体中成员的赋值、取值
        cin >> a[i].name;
        cin >> a[i].chinese >> a[i].math;
        a[i].total = a[i].chinese + a[i].math;
    }
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)             // 冒泡排序
            if (a[j].total < a[j + 1].total)
                swap(a[j], a[j + 1]);

    for (int i = 0; i < n; i++)             // 输出
        cout << a[i].name << " " << a[i].chinese << " "
             << a[i].math << " " << a[i].total << endl;
    return 0;
}
