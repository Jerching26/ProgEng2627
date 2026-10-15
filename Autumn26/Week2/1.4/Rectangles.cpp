#include <iostream>

int main () {
    int l1, l2, p, a;

    std::cout << "what is length of 1 side of the rectange?" << std::endl;
    std::cin >> l1;

    std::cout << "what is the length of the other side of the rectangle?" << std::endl;
    std::cin >> l2;

    p = 2 * (l1 + l2);
    a = l1 * l2;

    std::cout << "Area = " << a << std::endl;
    std::cout << "Perimeter = " << p << std::endl;
    
}