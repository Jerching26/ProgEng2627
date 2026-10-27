#include <iostream>
#include <cmath>

bool rectangle (double l1, double l2, double& p, double& a) {
    
    bool notnegative;

    if ((l1 > 0) && (l2 > 0)) {
    notnegative = true;
    p = (2 * l1) + (2 * l2);
    a = l1 * l2;
    }
    else {
        notnegative = false;
    }
    return notnegative;
}

int main () {
    double l1, l2, p, a;

    std::cout << "please enter the two non parallel side lengths of the rectangle: " << std::endl;
    std::cin >> l1 >> l2;

    if (rectangle(l1, l2, p, a)) {
        std::cout << "the perimeter is: " << p << std::endl;
        std::cout << "the area is: " << a << std::endl;
    }
    else {
        std::cout << "the values entered were invalid. Please try again." << std::endl;
    }
}