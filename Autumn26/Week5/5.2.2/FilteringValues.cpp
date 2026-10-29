#include <iostream>
#include <vector>

#include <iostream>
#include <vector>

void filter_vector(int n, std::vector <int> vin, std::vector <int>& vout) {

    for (int a = 0; a < vin.size(); a++) {
        if (vin[a] < n) {
            vout.push_back(vin[a]);
            }
    }

}

int main () {
    std::vector <int> v1;
    std::vector <int> vout;

    int n, tmp, s;

    std::cout << "enter how many elements to be stored: " << std::endl;
    std::cin >> n;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n; a++) {
        std::cin >> tmp;
        v1.push_back(tmp);
    }
    std::cout << "enter a value s to remove elemtents less than it in the vector" << std::endl;
    std::cin >> s;

    std::cout << "the numbers less than " << s << " are the following: " << std::endl;

    filter_vector (s, v1, vout);

    for (int a = 0; a < vout.size(); a++) {
        std::cout << vout[a] << " ";
    }
}