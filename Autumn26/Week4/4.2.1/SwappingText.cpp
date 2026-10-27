#include <iostream>
#include <String>

void mywordswap (std::string& a, std::string& b) {
    std::string tmp;

    tmp = a;
    a = b;
    b = tmp;
}

int main () {
    std::string word1, word2;

    std::cout << "please enter two words:" << std::endl;
    std::cin >> word1 >> word2;

    std::cout << "you entered:" << std::endl;
    std::cout << "word 1: " << word1 << std::endl;
    std::cout << "word 2: " << word2 << std::endl;

    mywordswap (word1, word2);

    std::cout << "after swapping words:" << std::endl;
    std::cout << "word 1: " << word1 << std::endl;
    std::cout << "word 2: " << word2 << std::endl;
}