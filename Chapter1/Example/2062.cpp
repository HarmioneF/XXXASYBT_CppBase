#include<iostream>      // ʹ��cin,cout�������iostream��
/* #include<cstdio> */     // ʹ��printf��scanf�������cstdio��
using namespace std;
int main(){
    int x, y;       // �������ͱ���
    cin >> x;       // �����õ���cstdio�⣬��ʹ��scanf("%d", &x);
    y = 10 * x;     // ������Ʊ��
    cout << x << " " << y << endl;      // �����õ���cstdio�⣬��ʹ��printf("%d %d\n", x, y);ע��%d %d֮��ո�
    return 0;       // ��������
}
