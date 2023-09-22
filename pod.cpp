#include <iostream>

//      ------ Plain Old data Classes   ------ 

struct Car {
    char make[256];
    int year;
    int wheels;
    bool isRunning;
};


int main() {
    Car myBMW;
    myBMW.year = 2005;
    myBMW.isRunning = true;
    printf("My BMW year is %d", myBMW.year); 


    return 0;
}
