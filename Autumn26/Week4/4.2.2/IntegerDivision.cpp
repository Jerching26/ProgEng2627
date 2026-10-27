#include <iostream>

void divide (int a, int b, int& res, int& rem) {

    res = 0;


    while (a > b) {
        a = a - b;
        res = res + 1;
    }
    rem = a;
}

int main () {
    int a, b, res, rem;

    std::cout << "enter an integer (a) to be divided by integer (b)" << std::endl;
    std::cin >> a >> b;

    divide (a, b, res, rem);

    std::cout << a << "/" << b << " = " << res << "  r: " << rem << std::endl;
}