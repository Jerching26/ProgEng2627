#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// useful for manipulation of strings
#include <sstream>

// to set precision when printing
#include <iomanip>


std::vector<double> line_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    // we can use a stringstream as if it were a stream object 
    // such as std::cout or something of type
    // std::ifstream or std::ofstream

    ss << s;
    while(ss >> tmp){
        // std::stod converts from string to double
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    // std::getline reads a whole line as a string
    // by default the separator is the newline
    // rather than any whitespace
    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}


std::vector<double> matrix_column (const std::vector<std::vector<double>>& input, int col) {
    std::vector<double> output;

    for (int i = 0; i < input.size(); i++) {        //column size
        output.push_back(input[i][col]);
    }
    return output;
}

double scalar_product (const std::vector<double> row, const std::vector<double> col) {
    double sum = 0;

    for (int b = 0; b < row.size(); b++) {
        sum = sum + (row[b] * col[b]);
    }

    return sum;
}


//multiplication of two matrices
std::vector<std::vector<double>> matrix_multiply(const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2) { 

    std::vector<std::vector<double>> out;

    for (int c = 0; c < m2[0].size(); c++) {   //row index

        std::vector<double> row;
        for (int d = 0; d < m2.size(); d++) {    //col index
            row.push_back(scalar_product(m1[c], matrix_column(m2, d)));     //stores row of sclar products
        }
        out.push_back(row);         //pushbacks row of sclar products to row of output matrix
    }   

    return out;
}







std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    // getting the std::string representation 
    // of this std::stringstream object
    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_multiply(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "x" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}