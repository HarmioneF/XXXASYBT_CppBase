#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 61;
char s1[N], s2[N], x[N], t[N];
int l1, l2;

int main() {
    cin >> s1 >> s2;
    if (strlen(s1) < strlen(s2)) {        // 将长度短的字符串作为预判断字串
        // 将s1, s2互换
        strcpy(t, s1);
        strcpy(s1, s2);
        strcpy(s2, t);
    }
    strcpy(x, s1);
    if (strstr(strcat(s1, x), s2) == NULL) {
        /*
         * strstr(s1, s2)函数用于判断字符串s2是否是s1的子串
         * 如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL
         */
        cout << "false" << endl;
    } else
        cout << "true" << endl;

    return 0;
}
