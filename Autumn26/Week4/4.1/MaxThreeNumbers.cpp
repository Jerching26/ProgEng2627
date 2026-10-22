#include <iostream>
#include <cmath>

int maxthree (int a, int b, int c) {
    int max;
    
    if ((a > b) && (a > c)) {
        max = a;
    }
    else if ((b > c) && (b > a)) {
        max = b;
    }

    else if ((c > a) && (c > b)) {
         max = c;
    }
    return max;
}

int main () {
    int first, second, third;

    std::cout << "Enter the first integer: " << std::endl;
    std::cin >> first;

    std::cout << "Enter the second integer: " << std::endl;
    std::cin >> second;

    std::cout << "Enter the third integer: " << std::endl;
    std::cin >> third;

    std::cout << "The maximum of the two numbers is: " << maxthree(first, second, third) << std::endl;
}