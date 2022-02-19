#include <cstdio>

int main() {
    freopen("in.txt", "r", stdin);      // 定义输入文件名
    freopen("out.txt", "w", stdout);    // 定义输出文件名

    int temp, sum = 0;
    while (scanf("%d", &temp) == 1) {           /* (cin >> temp)从输入文件中读入数据，在C++中非0为真 */
        sum = sum + temp;
    }
    printf("%d\n", sum);

    /* 关闭文件 */
    fclose(stdin);
    fclose(stdout);
}
