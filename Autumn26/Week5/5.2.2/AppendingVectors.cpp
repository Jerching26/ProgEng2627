#include <iostream>
#include <vector>

void append_vectors(const std::vector <int>& vin1, const std::vector <int>& vin2, std::vector <int>& vout) {
    for (int a = 0; a < vin1.size(); a++) {
        vout.push_back(vin1[a]);
    }
    for (int b = 0; b < vin2.size(); b++) {
        vout.push_back(vin2[b]);
    }
}

int main() {
    std::vector <int> v1;
    std::vector <int> v2;
    std::vector <int> vout;

    int n1, n2, tmp;

    std::cout << "enter how many elements to be stored in first set: " << std::endl;
    std::cin >> n1;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n1; a++) {
        std::cin >> tmp;
        v1.push_back(tmp);
    }



    std::cout << "enter how many elements to be stored in second set: " << std::endl;
    std::cin >> n2;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n2; a++) {
        std::cin >> tmp;
        v2.push_back(tmp);
    }

    std::cout << "vout is the following: " << std::endl;

    append_vectors (v1, v2, vout);

    for (int d = 0; d < vout.size(); d++) {
        std::cout << vout[d] << " " << std::endl;
    }
}