#include <iostream>
#include <cmath>


int smallestfactor (int n) {

    for (int i = 2; i < n; i++) {

        if ((n % i) == 0) {     //not prime
            return i;
        }
    }
    return 0;       //prime
}

int main () {
    int a, b;

    std::cout << "please enter two integer numbers greater than 1, from smallest to largest" << std::endl;
    std::cin >> a >> b;
    std::cout << std::endl;

    for (int i = a; i <= b; i++) {
        if ((smallestfactor(i)) == 0) {
            std::cout << i << std::endl;
        }
    }
}