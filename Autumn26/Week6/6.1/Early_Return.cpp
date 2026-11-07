#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main () {
    std::ifstream infile;
    std::string input_file;

    std::cout << "enter the text file in the format: name.txt" << std::endl;
    std::cin >> input_file;

    infile.open(input_file);

    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while (infile >> tmp) {
        std::cout << tmp << std::endl;
    }
    infile.close();
}