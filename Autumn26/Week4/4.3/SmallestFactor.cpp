#include <iostream>
#include <cmath>


int smallestprime (int n) {

    for (int i = 2; i < n; i++) {

        if ((n % i) == 0) {
            return i;
        }
    }
    return 0;
}

int main () {
    int n;

    std::cout << "enter an integer greater than 1" << std::endl;
    std::cin >> n;

    std::cout << "The smallest factor is: " << smallestprime(n) << std::endl;
}