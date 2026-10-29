#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin) {

    double sum = 0;

    for (int i = 0; i < vin.size(); i++) {
        sum = sum + vin[i];
    }
    return sum;
}

int main () {
    std::vector<double>v;

    int n, tmp;

    std::cout << "enter how many elements to be stored: " << std::endl;
    std::cin >> n;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n; a++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;
}