#include <iostream>
#include <cmath>

double mypow(double base, int exp) {
    double result;
    result = std::pow(base, exp);
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