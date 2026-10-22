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

double sumofpowers(double base, int n) {
    double ans, result;
    result = 0;

    for (int i = 1; i <= n; i++ ) {
        result = mypow(base, i);
        ans = ans + result;
    }

    return ans;
}



int main(){
    int x, n;

    std::cout << "Enter a number for x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter a number for n: " << std::endl;
    std::cin >> n;
    
    std::cout << "The sum of power is: " << sumofpowers(x, n) << std::endl; 
}