#include <cstdio>

using namespace std;

int main() {
    FILE * fin, * fout;
    fin = fopen("in.txt", "rb");                // 定义输入文件名
    fout = fopen("out.txt", "wb");              // 定义输出文件名

    int temp, sum = 0;
    while (fscanf(fin, "%d", &temp) == 1) {                   // 从输入文件中读入数据
        sum += temp;
    }
    fprintf(fout, "%d\n", sum);

    fclose(fin);
    fclose(fout);
    return 0;
}
