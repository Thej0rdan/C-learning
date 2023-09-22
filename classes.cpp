#include <iostream>

//      ----Classes---- 

class myDateAndTime{ //this declares all members private by default
    int year;
    public: //to make the members accesible we make them public 
    int get_year() {
        return year; 
    }
    void add_year() { 
        year++;
    } 

    bool set_year(int new_year) {
        if (new_year  < 2019) return false;//This returns false if year is below 2019
        year = new_year;
        return true;
    } 


};

 
int main() {
    myDateAndTime clock;
    if (!clock.set_year(2018)) {//This sets value to true even when the year is 2018 then changes the year to 2019
        clock.set_year(2019);
    }
    clock.add_year();//This increments the year value by 1
    printf("Year: %d\n", clock.get_year());
    

    return 0;
}  