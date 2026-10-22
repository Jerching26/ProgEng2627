#include <iostream>
#include <cmath>

double mypow(double base, int exp) {
    double result;
    result = 1;

    if (exp > 0) {
        for (int n = 0; n < exp; n++) {
            result = result * base;
            }
    }
    else {
        for (int n = 0; n > exp; n--) {
            result = result * (base);
        }
        result = 1 / result;
    }
return result;
}

int main () {
    double x, n, g, sum;
    sum = 0;

    std::cout << "Enter a number for x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter a number for n: " << std::endl;
    std::cin >> n;

    for (int i = 1;i <= n; i++) {
        g = mypow(x, i);
        sum = sum + g;
    }

    std::cout << "The sum of powers is: " << sum << std::endl;
}