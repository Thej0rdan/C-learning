 #include <iostream>

//      ----Classes---- 

class myDateAndTime{ //this declares all members private by default
    int year;
public: //to make the members accesible we make them public 
    int get_year() {
        return year; 
    }

    myDateAndTime(int year_in) {
        if (!set_year(year_in)){
         year = 2019;
        }
   
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

    myDateAndTime clock{2020};
    printf("The year is %d", clock.get_year()); 

    return 0;
}  