#include <iostream>
#include <cmath>

int main () {
    double x, n, g, sum;
    sum = 0;

    std::cout << "Enter a number for x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter a number for n: " << std::endl;
    std::cin >> n;

    for (int i = 1;i <= n; i++) {
        g = std::pow(x, i);
        sum = sum + g;
    }

    std::cout << "The sum of powers is: " << sum << std::endl;
}