#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main () {
    std::ifstream textfile;

    textfile.open("text.txt");

    if (!textfile.is_open()) {
        std::cout << "the file cannot be opened." << std::endl;
    }

    std::ifstream wordfile;
    wordfile.open("words.txt");

    if (!wordfile.is_open()) {
        std::cout << "the file can't be opened" << std::endl;
    }

    std::string tmp;
    std::vector<std::string> wfile;
    std::vector<std::string> tfile;

    while (wordfile >> tmp) {
        wfile.push_back(tmp);
    }


    while (textfile >> tmp) {
        tfile.push_back(tmp);

    }

    int count = 0;
    std::ofstream outfile;
    outfile.open("output.txt");

    for (int a = 0; a < wfile.size(); a++) {
        for (int b = 0; b < tfile.size(); b++) {
            if (tfile[b] == wfile[a]) {
                count++;
            }
        }
        outfile << wfile[a] << ": " << count << std::endl;
        count = 0;
    }

    textfile.close();
    wordfile.close();
    outfile.close();
}
