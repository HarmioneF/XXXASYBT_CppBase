#include <cstdio>
#include <cstring>

using namespace std;

void swapp(char &a, char &b) {      // 交换两个字符的位置
    char t;
    t = a;
    a = b;
    b = t;
}

void work(char *str) {
    int len = strlen(str);
    /*
     * strlen(str)这个函数返回的是str的长度，
     * 许包含头文件cstring
     * 这个函数的原型是"size_t strlen(const char* str)"
     * */
    for (int i = 0; i <= len / 2; ++i)
        swapp(str[i], str[len - i - 1]);
}

int main() {
    char s[110];
    char *str = s;
    gets(s);
    work(str);
    printf("%s", s);
    return 0;
}
