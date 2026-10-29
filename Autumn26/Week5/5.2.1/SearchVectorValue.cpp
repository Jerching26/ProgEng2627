#include <iostream>
#include <vector>

int search_vector(int n, const std::vector <int>& vin) {
    int count;
    count = -1;

    for (int a = 0; a < vin.size(); a++) {
        count = count + 1;
        if (n == vin[a]) {
            return count;
        }
    }
    return -1;
}

int main () {
    std::vector <int> v;

    int n, tmp, s;

    std::cout << "enter how many elements to be stored: " << std::endl;
    std::cin >> n;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n; a++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }
    std::cout << "enter a value s to check stored elements against" << std::endl;
    std::cin >> s;

    std::cout << "the first occurence of " << s << " is at index " << search_vector(s, v) << std::endl;
}