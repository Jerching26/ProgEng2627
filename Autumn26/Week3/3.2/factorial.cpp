#include <iostream>

int main () {

    int n, k, sol;

    std::cout << "enter a number: n to find n!" << std::endl;
    std::cin >> n;
    
    k = n;
    k = k - 1;
    sol = n;

    for (int i = 0; i < (n - 1); i++) {
        
        sol = sol * k;
        k = k - 1;

    }

    std::cout << n << "! = " << sol;
}