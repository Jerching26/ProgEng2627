#include <iostream>

int main () {
    int n, curmax, curmin;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> n;

    curmax = n;
    curmin = n;

    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while (n != 0) {
        std::cout << "please enter a number:" << std::endl;
        std::cin >> n;

        if (curmax < n) {
            curmax = n;
        }

        if (curmin > n) {
            curmin = n;
        }

        std::cout << "The maximum so far is: " << curmax << std::endl;
        std::cout << "The minimum so far is: " << curmin << std::endl;
    }
}