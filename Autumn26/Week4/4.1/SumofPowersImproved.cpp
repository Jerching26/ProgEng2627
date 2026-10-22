#include <iostream>
#include <cmath>

double sumofpowers(double base, int n) {
    double ans, result;
    result = 0;

    for (int i = 1; i <= n; i++ ) {
        result = std::pow(base, i);
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