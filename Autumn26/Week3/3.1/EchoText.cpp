#include <iostream>
#include <string>

int main () {
    std::string word;


    while ( (word != "STOP") && (word != "stop") && (word != "Stop")) {
        std::cin >> word;
        std::cout << word << std::endl;

    }
}