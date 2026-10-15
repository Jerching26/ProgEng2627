#include <iostream>

int main () {
    double height, weight, bmi;

    std::cout << "What is your height in metres?" << std::endl;
    std::cin >> height;

    std::cout << "What is your weight in kg?" << std::endl;
    std::cin >> weight;

    bmi = weight / (height * height);

    std::cout << "Your BMI is: " << bmi << std::endl;

    //how can i cap this at 1 d.p?
}