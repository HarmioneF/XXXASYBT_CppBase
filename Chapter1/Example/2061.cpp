#include<cstdio>    // printf��scanf����cstdio�⣬��C�����пɵ���stdio.h��

using namespace std;

int main() {    // ��������ʼ
    float s, h, up, down;        // float����s, h, up, downΪ������ʵ�ֱ���
    up = 15;        // �����ϵף���ʹ��scanf("%f", &up);
    down = 25;      // �����µף���ʹ��scanf("%f", &down);
    h = 2 * 150 / up;       // �����ϵ�������εĸ�
    s = (up + down) * h / 2;        // ������ε����
    printf("s=%0.2f\n", s);     // \n�ǻ��п��Ʒ���0.2f��ʵ��λ�����������2λС��
    return 0;       // ����������TC++��VC++��ҲҪ����
}
