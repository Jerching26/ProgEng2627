#include <iostream>
#include <cmath>

int maxtwo (int a, int b) {
    int max;
    
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    return max;
}

int main () {
    int first, second;

    std::cout << "Enter the first integer: " << std::endl;
    std::cin >> first;

    std::cout << "Enter the second integer: " << std::endl;
    std::cin >> second;

    std::cout << "The maximum of the two numbers is: " << maxtwo(first, second) << std::endl;
}