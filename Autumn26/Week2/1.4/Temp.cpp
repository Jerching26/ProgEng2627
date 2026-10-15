#include <iostream>

int main () {
    double C, F;

    std::cout << "What is your temperature in degrees celsius?" << std::endl;
    std::cin >> C;

    F = (C * 1.8) + 32;

    std::cout << "Your temperature is " << F << "F" << std::endl;

}