#include <cstdio>
using namespace std;
const double PI=3.14159;
int main()
{
    double r, d, c, s;
    scanf("%lf", &r);
    d = 2 * r;
    c = 2 * PI * r;
    s = PI * r * r;
    printf("%.4lf %.4lf %.4lf", d, c, s)
    return 0;
}
