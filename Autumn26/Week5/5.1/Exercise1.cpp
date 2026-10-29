#include <iostream>
#include <vector>

int main () {
    std::vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    int a, b, c, ans;

    std::cout << "enter three integer numbers: " << std::endl;
    std::cin >> a >> b >> c;

    v[0] = a;
    v[1] = b;
    v[2] = c;

    ans = v[0] * (v[1] + v[2]);

    std::cout << a << " * (" << b << " + " << c << ") = " << ans << std::endl;
}