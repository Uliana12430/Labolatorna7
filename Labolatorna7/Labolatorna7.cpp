#include <Windows.h>
#include <iostream>
#include <cmath>

double function(double x) {
    if (x <= 0) {
        return sin(cos(x));
    }
    else if (x > 0) {
        return cos(log(x));
    }
    else {
       
        return NAN;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x;
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    double result = function(x);
    std::cout << "Значення функції при x = " << x << " дорівнює: " << result << std::endl;

    return 0;
}