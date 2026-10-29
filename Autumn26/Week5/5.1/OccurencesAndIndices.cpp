#include <iostream>
#include <vector>

int main () {
    int n, tmp, s, count;
    count = 0;

    std::vector <int> store;
    std::vector <int> indices;

    std::cout << "enter the amount of numbers to be stored: " << std::endl;
    std::cin >> n;

    std::cout << "enter the numbers to be stored:" << std::endl;
    
    for (int a = 0; a < n; a++) {
        std::cin >> tmp;
        store.push_back(tmp);
    }

    std::cout << "enter a number s to find the number of occurences in the vector" << std::endl;
    std::cin >> s;

    for (int b = 0; b < store.size(); b++) {
        if (store[b] == s) {
            count = count + 1;
            indices.push_back (b);
        }
    }

    if (count != 0) {
        std::cout << "there are " << indices.size() << " occurences of " << s << " at indices:" << std::endl;

        for (int c = 0; c < indices.size(); c++) {
            std::cout << indices[c] << std::endl;
        }
    }
    else {
        std::cout << "there are no occurences of " << s << std::endl;
    }
}