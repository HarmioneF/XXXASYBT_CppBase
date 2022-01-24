#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Input a and b: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "Change a to b, b to a..." << endl;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
