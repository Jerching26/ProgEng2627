#include <iostream>
#include <vector>

int min_vect_element(const std::vector<double>& vin) {
    int pos = -1;
    int ans, tmp, min;
    min = 10000;
    ans = 10000;

    for (int a = 0; a < vin.size(); a++) {
        pos = pos + 1;
        tmp = vin[a];
        if (tmp < min) {
            min = tmp;
            ans = pos;
        }
    }
    if (ans != 10000) {
        return ans;
    }
    else {
        return -1;
    }
}


int main () {
    std::vector <double> v;

    int n, tmp;

    std::cout << "enter how many elements to be stored: " << std::endl;
    std::cin >> n;

    std::cout << "enter numbers to be stored: " << std::endl;

    for (int a = 0; a < n; a++) {
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the minimum value's index is: " << min_vect_element(v) << std::endl;
}
