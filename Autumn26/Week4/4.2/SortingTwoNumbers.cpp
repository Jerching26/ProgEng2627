#include <iostream>

void sorttwo (double& a, double& b) {
    double tmp;

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
}

int main () {
    double n1, n2;

    std::cout << "Please enter two numbers to be sorted:" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "The numbers entered: " << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    sorttwo (n1, n2);

    std::cout << "The sorted numbers are: " << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}