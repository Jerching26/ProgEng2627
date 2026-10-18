#include <iostream>

int main () {
    int n, result, s, f;
    s = 1;      //term order 
    f = 1;      //multiplication factor

    std::cin >> n;

    for (int c1 = 0; c1 < n; c1++) {


        for (int c2 = 0; c2 < n; c2++) {
            result = s * f;
            s = s + 1;
            std::cout << result << "\t";
        }

        f = f + 1;
        s = 1;
        std::cout << std::endl;
    }
}