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

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "4^-1:" << mypow(4, -1) << std::endl;
    std::cout << "4^-2:" << mypow(4, -2) << std::endl;
}