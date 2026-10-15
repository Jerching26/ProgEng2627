#include <iostream>

int main () {
    int n, sum;
    sum = 0;

    while (n != 0) {
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;

        sum = sum + n;

        std::cout << "the sum so far is:" << std::endl << sum << std::endl;
    }
}