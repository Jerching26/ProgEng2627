#include <iostream>

int main () {
    int n, count, max;

    count = 0;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;

    max = n;

    while (n != 1) {
        
        if ((n % 2 == 0)) {       //n even
            n = n / 2;
            count = count + 1;
            std::cout << n << std::endl;
        }

        else if ((n % 2 == 1)) {       //n odd
            n = 3*n + 1;
            count = count + 1;
            std::cout << n << std::endl;
        }

        if (max < n) {
            max = n;
        }
    }

    std::cout << "Count = " << count << std::endl;
    std::cout << "Maximum = " << max << std::endl;
}