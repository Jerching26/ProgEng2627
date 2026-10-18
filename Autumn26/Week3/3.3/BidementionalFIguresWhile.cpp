#include <iostream>

int main () {
    int n, a, b;
    a = 0;
    b = 0;

    std::cin >> n;


    while (a < n) {
        b = 0;
        while (b < n) {
            std::cout << "*";
            b = b+1;
        }

        std::cout << std::endl;
        a = a + 1;
    }
}