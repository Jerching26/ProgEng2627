#include <iostream>
#include <fstream>

int main () {
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()) {
        int tmp;
        int sum = 0;

        while (infile >> tmp) {
            sum = sum + tmp;
        }

        std::cout << "Sum = " << sum << std::endl;
        infile.close();
    }
    else {
        std::cout << "error opening file" << std::endl;
    }
}