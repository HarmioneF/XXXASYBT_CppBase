#include <fstream>              // 使用文件输入输出流，对cin、cout语句适用

using namespace std;

int main() {
    ifstream fin("in.txt");     // 定义输入文件名
    ofstream fout("out.txt");   // 定义输出文件名
    int temp, sum = 0;

    while (fin >> temp)             // 从输入文件中读取数据
        sum += temp;
    fout << sum << endl;

    fin.close();
    fout.close();
    return 0;
}
