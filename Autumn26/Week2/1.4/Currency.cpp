#include <iostream>

int main () {
    double gbp, eur;

    std::cout << "Enter the amount of Pound Sterling to be exchanged for Euros:" << std::endl;
    std::cin >> gbp;
    
    eur = gbp * 1.18;

    std::cout << "GBP:" << gbp << " -> " << "EUR:" << eur << std::endl;

    //how to use £ and Euro sign without error?


}