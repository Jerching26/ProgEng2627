#include <iostream>
#include <vector>

int main () {
    int n, t, tmp;
    tmp = 1;

    std::vector<int> store;

    std::cout << "enter the amount of numbers, n, you want to store" << std::endl;
    std::cin >> n;

    std::cout << "enter n numbers to be stored" << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        store.push_back(tmp);
    }

    std::cout << "enter a number t, to print entered values less than t" << std::endl;
    std::cin >> t;

    for (int a = 0; a < store.size(); a++) {
        if (store[a] < t) {
            std::cout << store[a] << std::endl;
        }
    }
}