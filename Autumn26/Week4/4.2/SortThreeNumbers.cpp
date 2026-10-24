#include <iostream>

void sortthree (double& a, double& b,double& c) {
    double max, min, mid;

    if ((a > b) && (a > c)) {
        max = a;

        if (b > c) {
            mid = b;
            min = c;
        }
        else {
            mid = c;
            min = b;
        }
    }
    else if ((b > c) && (b > a)) {
        max = b;

        if (c > a) {
            mid = c;
            min = a;
        }
        else {
            mid = a;
            min = c;
        }
    }

    else if ((c > a) && (c > b)) {
        max = c;

        if (a > b) {
            mid = a;
            min = b;
        }
        else {
            mid = b;
            min = a;
        }
    }
    else if ((b == c) && (c == a)) {
        min = mid = max = a;
    }

    a = min;
    b = mid;
    c = max;
}

int main () {
    double n1, n2, n3;

    std::cout << "Please enter three numbers to be sorted:" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << "The numbers entered: " << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;

    sortthree (n1, n2,n3);

    std::cout << "The sorted numbers are: " << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
}