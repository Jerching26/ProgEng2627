#include <iostream>

int main () {
    int a, b, r, q;
    q = 0;
    r = 0;

    std::cout << "Enter an integer number to be divided." << std::endl;
    std::cin >> a;

    std::cout << "Enter an integer number to divide by." << std::endl;
    std::cin >> b;
    std::cout << std::endl;

    std::cout << "we want to perform the integer division of " << a << " by " << b << std::endl << std::endl;


    while (a > b) {
        
        std::cout << a << " is greater than " << b << " so we subtract " << b << " from " << a << std::endl;

        a = a - b;
        q = q + 1;

        std::cout << "we get " << a << std::endl << std::endl;

    }

    r = a;
    
    std::cout << a << " is not greater than " << b << " so we terminate the loop" << std::endl << std::endl;

    std::cout << "the quotient is the number of subtractions (" << q << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end (" << r << ")" << std::endl;

}