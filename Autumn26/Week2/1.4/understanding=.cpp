#include <iostream>

int main () {
    double a, b, c;

    a = 1;
    b = 2;
    c = a + b;

    std::cout << c << std::endl;

    a = 2;

    std::cout << c << std::endl;

    //I expect 3 to be printed then 3 to be printed
    //again as after a is changed, the equation for c 
    //needs to be run again for printed c to change

    c = a + b;

    std::cout << c << std::endl;

    //Now the equation is rewritten, the new c will be printed (4)S
}