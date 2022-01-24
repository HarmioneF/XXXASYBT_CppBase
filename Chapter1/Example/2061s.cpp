#include <iostream>
#include <iomanip>

int main(){
    float a = 15, b = 25, s = 150, h;

    h = s * 2 / 15;
    s = (a + b) * h / 2;

    std::cout << std::fixed << std::setprecision(2) << s << std::endl;

    return 0;
}
