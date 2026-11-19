#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
    std::ifstream infile;

    infile.open(argv[1]);

    std::string tmp;

    while (infile >> tmp) {
        std::cout << tmp << std::endl;
    }
    infile.close();
    
}

