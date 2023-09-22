#include <iostream>

//      ----Methods ---- 

struct myDateAndTime{//This declares members public by default
    int get_year() {
        return year; 
    }
    void add_year() { //This is a method
        year++;
    } 

    bool set_year(int new_year) {
        if (new_year  < 2019) return false;
        year = new_year;
        return true;
    } 

    private: 
    int year;

};

 
int main() {
    myDateAndTime md;
    md.set_year(2019);
    printf("YEAR: %d\n", md.get_year());
    md.set_year(2023);
    printf("YEAR: %d\n", md.get_year());     

    return 0;
}  