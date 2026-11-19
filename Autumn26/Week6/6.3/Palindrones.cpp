#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){

    std::vector <char> letters;
    
    for (int a = 0; a < s.size(); a++)
        if (char_to_string(s[a]) != " ") {
            letters.push_back(s[a]);            //push string form letters without spaces to vector
        }
    
    int count = (letters.size() - 1);
        
    for (int b = 0; b < letters.size(); b++) {  //check every word of vector left to right
        if (letters[b] == letters[count]) {     //compare every word of vector right to left

        }                               //shift count one to left
        else {
            return false;
        }
        count--; 
    }
    return true;

}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}