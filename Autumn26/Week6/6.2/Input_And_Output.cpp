#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main () {
    std::string input, output;

    std::cout << "enter the name.txt of input file" << std::endl;
    std::cin >> input;

    std::ifstream intext;
    intext.open(input);

    if (!intext.is_open()) {
        std::cout << "file not recognised" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;

    while (intext >> tmp) {
        std::cout << tmp << std::endl;
    }
    intext.close();

    


    std::cout << "enter the name.txt of output file" << std::endl;
    std::cin >> output;

    std::ifstream outtext;
    outtext.open(output);

    if (!outtext.is_open()) {
        std::cout << "file not recognised" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmptext;

    while (outtext >> tmptext) {
        std::cout << tmptext << std::endl;
    }
    outtext.close();
}