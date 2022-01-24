#include <iostream>

using namespace std;

int main() {
    double b_h_cost = 27 + 23, b_speed = 3.0, w_speed = 1.2;
    int far;

    cin >> far;
    double b_cost = far / b_speed + b_h_cost;
    double w_cost = far / w_speed;
    if (b_cost >= w_cost)
        cout << "Walk" << endl;
    else if (b_cost <= w_cost)
        cout << "Bike" << endl;
    else
        cout << "All" << endl;

    return 0;
}
