#include <iostream>
#include <string>

int main () {
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool unit_check = true;

    std::cout << "Enter temperature unit on one line and either Celsius: C, or Fareenheit: F on a new line." << std::endl;
    std::cin >> temp_in >> unit_in;

    if ((unit_in == "C") || (unit_in == "c")) {
        unit_out = "F";
        temp_out = (temp_in * (9/5.0)) + 32;

    }
    
    else  if ((unit_in == "F") || (unit_in == "f")) {
        unit_out = "C";
        temp_out = (temp_in - 32) * (5/9.0);
        
    }
    else {
        unit_check = false;
    }


    if (unit_check) {
        std::cout << temp_out << unit_out;
    }
    else {
        std::cout << "The unit entered is not recognised. Please try again." << std::endl;
    }

}