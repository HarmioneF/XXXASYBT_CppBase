#include <iostream>

using namespace std;

int main() {
    double a, b;
    char x;
    cin >> a >> b >> x;

    switch (x) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Divided by zero!" << endl;
                break;
            } else {
                cout << a / b << endl;
                break;
            }
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
