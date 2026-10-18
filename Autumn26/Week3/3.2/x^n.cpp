#include <iostream>

int main () {
    int x, n, sol;
    sol = 1;

    std::cout << "enter a number to be raised to the power of" << std::endl;
    std::cin >> x;

    std::cout << "enter a power to raise to" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        sol = sol * x;
    }

    std::cout << sol << std::endl;
}