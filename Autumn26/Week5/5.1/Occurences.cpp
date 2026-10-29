#include <iostream>
#include <vector>

int main () {
    int n, tmp, s, count;
    count = 0;

    std::vector <int> store;

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
        }
    }

    std::cout << "there are " << count << " occurences of " << s << std::endl; 
}