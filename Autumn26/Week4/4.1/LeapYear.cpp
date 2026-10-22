#include <iostream>

bool leap_year(int year) {


        if ((year % 4) == 0) {

            if ((year % 100) == 0) {

                if ((year % 400) == 0) {
                    return true;
                    }
                else {
                    return false;
                    }

            }
            else {  
                return true;
            }
        }
        else {
            return false;
            }
}

int main () {
    int input_year;

    std::cout << (leap_year(1600)) << std::endl;
    std::cout << (leap_year(2000)) << std::endl;
    std::cout << (leap_year(1700)) << std::endl;
    std::cout << (leap_year(1800)) << std::endl;
    std::cout << (leap_year(2100)) << std::endl;
    std::cout << (leap_year(2200)) << std::endl;
    std::cout << (leap_year(2300)) << std::endl;
    std::cout << (leap_year(2400)) << std::endl;
    
}
