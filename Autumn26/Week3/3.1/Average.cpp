#include <iostream>

int main () {
    int n, sum;
    double avg, i;
    sum = 0;
    i = 0;

    while (n != 0) {
        std::cout << "enter a number: " << std::endl;
        std::cin >> n;

        i = i + 1;

        sum = sum + n;
        avg = sum / i;

        std::cout << "the average so far is:" << std::endl << avg << std::endl;
    }
}