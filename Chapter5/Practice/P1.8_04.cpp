#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 5][n + 5];

    for (int i = 1; i <= n; i++)                      //输入全部的元素值
        for (int j = 1; j <= n; j++) {

            cin >> a[i][j];
        }

    for (int i = 1; i <= n; i++) {
        //a[0][i]表示第i列元素的和，a[i][0]表示第i行元素的和，初始时设置为0
        a[0][i] = 0;
        a[i][0] = 0;
    }

    for (int col = 1; col <= n; col++)                //计算每列元素的和
        for (int row = 1; row <= n; row++)
            a[0][col] += a[row][col];

    for (int row = 1; row <= n; row++)                //计算每行元素的和
        for (int col = 1; col <= n; col++)
            a[row][0] += a[row][col];

    int i, j, cnum, rnum, row, col;                 //判断每列元素的和是否为奇数，cnum,rnum分别表示n列元素中出现奇数的次数 ，n行元素中出现奇数的次数,row,col标记出现奇数的位置
    for (i = 1, cnum = 0; i <= n; i++) {

        if (a[0][i] % 2 == 1) {

            cnum++;                            //计算全部的列中出现奇数的次数
            col = i;                             //标记该位置，以便后续输出
        }
    }

    for (j = 1, rnum = 0; j <= n; j++) {
        //判断每行元素的和是否为奇数
        if (a[j][0] % 2 == 1) {

            rnum++;                            //计算部的行中出现奇数的次数
            row = j;                             //标记该位置，以便后续输出
        }

    }

    if (cnum == 0 && rnum == 0) {
        //每行每列的元素之和都为偶数
        cout << "OK";
    } else if (cnum == 1 && rnum == 1) {
        //刚好只有一行的元素和为奇数，一列的元素和为奇数的时候，才能通过修改某个位置的值来实现全部变成偶数
        cout << row << ' ' << col;
    } else {
        //否则不属于这两种情况，输出错误
        cout << "Corrupt";
    }

    return 0;
}
