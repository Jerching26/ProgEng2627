#include <iostream>

int main() {
    double x, acc = 1;
    int n, counter = 0;

    std::cin >> x >> n;

    while (counter < (n - 1)) {
        acc = x * n;
        std::cout << x << "+";
        counter = counter + 1;
    }
    std::cout << x;
    std::cout << " = " << acc << std::endl;
}