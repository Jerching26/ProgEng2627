#include <iostream>
#include <string>

int main () {
    int n, LB, UB, ans;
    std::string check;

    std::cout << "Enter the excluded lower bound: " << std::endl;
    std::cin >> LB;

    std::cout << "Enter the excluded upper bound: " << std::endl;
    std::cin >> UB;

    n = (UB + LB)/2;

    std::cout << std::endl << "This program will now guess a number between the bounds that";
    std::cout << " you are thinking of. After each number enter the letter L, for lower, or H, for higher" << std::endl << std::endl;

    std::cout << "Enter the number you are thinking of: ";
    std::cin >> ans;
    
        while (n != ans) {
            std::cout << n << ": H or L?" << std::endl;
            std::cin >> check;

            if ((check == "H") && (n !=ans)) {
                LB = n;
                n = (UB + LB)/2;
            }
            else if ((check == "L") && (n !=ans)) {
                UB = n;
                n = (UB + LB)/2;
            }
            std::cout << n << std::endl;
        }
        std::cout << "This is the number you thought of" << std::endl;
}