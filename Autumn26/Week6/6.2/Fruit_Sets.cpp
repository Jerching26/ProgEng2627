#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>

void union_vector (const std::vector <std::string>& vin1, const std::vector <std::string>& vin2, std::vector <std::string>& vout) {

    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }

    for (int i = 0; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}

void intersection_vector (const std::vector <std::string>& vin1, const std::vector <std::string>& vin2, std::vector <std::string>& vout) {
    for (int i = 0; i < vin2.size(); i++) {
        for (int a = 0; a < vin1.size(); a++) {
            if (vin2[i] == vin1[a]) {
                vout.push_back(vin2[i]);
            }
        }
    }
}

int main () {
    std::string house1, house2;

    std::cout << "enter name.txt of list 1: " << std::endl;
    std::cin >> house1;

    std::cout << "enter name.txt of list 2" << std::endl;
    std::cin >> house2;
    
    std::vector <std::string> list1;
    std::vector <std::string> list2;
    std::vector <std::string> intersect_v;
    std::vector <std::string> union_v;    

    std::ifstream ware_1;
    std::ifstream ware_2;
    std::ofstream intersect_s;
    std::ofstream union_s;

    ware_1.open(house1);
    ware_2.open(house2);
    intersect_s.open("intersection.txt");
    union_s.open("union.txt");

    std::string tmp;

    while (ware_1 >> tmp) {
        list1.push_back(tmp);
    }

    while (ware_2 >> tmp) {
        list2.push_back(tmp);
    }

    union_vector(list1, list2, union_v);
    intersection_vector(list1, list2, intersect_v);

    for (int i = 0; i < union_v.size(); i++) {
        union_s << union_v[i] << std::endl;
    }
    for (int i = 0; i < intersect_v.size(); i++) {
        intersect_s << intersect_v[i] << std::endl;
    }

    ware_1.close();
    ware_2.close();
    intersect_s.close();
    union_s.close();
}
