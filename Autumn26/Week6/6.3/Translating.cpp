#include <iostream>
#include <vector>
#include <fstream>
#include <string>


int main () {
    std::ifstream advert;
    std::ifstream translate;
    advert.open("advert.txt");
    translate.open("translate.txt");


    std::vector <std::string> ad_store;
    std::vector <std::string> tr_store;


    std::string tmp;
    while (advert >> tmp) {
        ad_store.push_back(tmp);
    }
    while (translate >> tmp) {
        tr_store.push_back(tmp);
    }



    std::ofstream output;
    output.open("output.txt");
    for (int a = 0; a < ad_store.size(); a++) {     //check for advert words

        for (int b = 0; b < tr_store.size(); b = b + 2) {     //check against every word of translation
            if ((ad_store[a] == tr_store[b]) && ((b + 1) < tr_store.size())) {
                ad_store[a] = tr_store[b+1];      //replace
            }
        }

    }
    for (int c = 0; c < ad_store.size(); c++) {
        output << ad_store[c] << " ";
    }

    advert.close();
    translate.close();
    output.close();
}