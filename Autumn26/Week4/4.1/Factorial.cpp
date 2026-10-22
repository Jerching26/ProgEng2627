#include <iostream>
#include <cmath>

int myfactorial (int in) {

    int fact, store;
    fact = 1;

    for (int i = 1; i <= in; i++) {
        store = fact * i;
        fact = store;
    }
    return fact;
}

int main() {
    int n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}