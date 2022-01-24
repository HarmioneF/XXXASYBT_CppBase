#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int w;
    int p = 8;
    char c;
    cin >> w >> c;
    switch (w > 1000)
        case 1:
            p += int(ceil((w - 1000) / 500.0)) * 4;
    switch (c)
        case 'y':
            p += 5;
    cout << p;
    return 0;
}
