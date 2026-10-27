#include <iostream>

bool leap_year(int year) {
    bool ly;

    if ((year % 4) == 0) {
        if ((year % 100) == 0) {
            if ((year % 400) == 0) {
                ly = true;
                    }
            else {
                ly = false;
                }
            }
        else {  
            ly = true;
        }
    }
    else {
        ly = false;
    }
    return ly;
}

void next_date (int d1, int m1, int y1, int& d2, int& m2 , int& y2) {

    if (leap_year(y1)) {                    //year is leap year

        if ((d1 == 28) && (m1 == 2)) {        //febuary case
            d2 = 29;
            m2 = 2;
            y2 = y1;
        }
        if ((d1 == 29) && (m1 == 2)) {        //extra febuary case
            d2 = 1;
            m2 = 3;
            y2 = y1;
        }
        else if ((m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11)) {        //30 day months 4,6,9,11
            if (d1 == 30) {                  
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else {                          
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else if ((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10)) {         //31 day months apart from 12 ( 1, 3, 5, 7, 8, 10)
                if (d1 == 31) {       
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else {                          
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }  
        else if (m1 == 12) {             //December
            if (d1 == 31) {
                d2 = 1;
                m2 = 1;
                y2 = y1 + 1;
            }
            else {
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }    
    }
    else {
        if ((d1 == 28) && (m1 == 2)) {        //NORMAL febuary case
            d2 = 1;
            m2 = 3;
            y2 = y1;
        }
        else if ((m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11)) {        //30 day months
            if (d1 == 30) {                  
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else {                          
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }
        else if ((m1 == 1) || (m1 == 3) || (m1 == 5) || (m1 == 7) || (m1 == 8) || (m1 == 10)) {         //31 day months apart from 12
            if (d1 == 31) {       
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
            else {                          
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }  
        else if (m1 == 12) {             //December
            if (d1 == 31) {
                d2 = 1;
                m2 = 1;
                y2 = y1 + 1;
            }
            else {
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
        }    
    }
}




int main () {
    int d1, d2, m1, m2, y1, y2;

    std::cout << "enter the date today in the format dd/mm/yyyy" << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1,m1,y1,d2,m2,y2);

    std::cout << "the date tomorrow is: " << d2 << "/" << m2 << "/" << y2 << std::endl;
}