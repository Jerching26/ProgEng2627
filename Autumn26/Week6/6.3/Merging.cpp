#include <iostream>
#include <vector>


void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {

    int a = 0;
    int b = 0;

while (a < v1.size() && b < v2.size()) {
    if (v1[a] <= v2[b]) {
        merged.push_back(v1[a]);
        a++;
    } else {
        merged.push_back(v2[b]);
        b++;
    }
}

while (a < v1.size()) {     //add leftover already sorted numbers to merged
    merged.push_back(v1[a]);
    a++;
}

while (b < v2.size()) {
    merged.push_back(v2[b]);
    b++;
}
}


int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}