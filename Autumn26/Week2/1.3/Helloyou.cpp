#include <iostream>
#include <string>                                   //includes header for text variables

int main () {

    std::string user_name;                          //defines variable
    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;                          //cin stores what you type in into username variable
    std::cout << "hello, " << user_name << std::endl;   //end of line, prints 
}