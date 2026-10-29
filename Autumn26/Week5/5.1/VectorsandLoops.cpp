#include <iostream>
#include <vector>

int main () {
    std::vector<int> sequence;
    int tmp = 1;

    std::cout << "please enter a sequence terminated by 0" << std::endl;
    while (tmp != 0) {
        std::cin >> tmp;
        sequence.push_back(tmp);
    }

    std::cout << "you entered the number:" << std::endl;

    for (int n = 0; n < sequence.size(); n++) {
        std::cout << sequence[n] << std::endl;
    }

    std::cout << "in reverse order: " <<std::endl;

    for (int z = sequence.size() - 1; z >= 0; z--) {
        std::cout << sequence[z] << std::endl;
    }
}