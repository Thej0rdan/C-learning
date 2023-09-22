#include <iostream>

//      ==---- Pointers and Arrays-------
using namespace std;

struct Car{
    char name[256]; 
};

void print_name(Car *cars, size_t n_cars) {
   for(size_t i=0; i < n_cars; i++) {
        printf("%s Car\n", cars[i].name);
   } 
}


int main() {
 
    Car myGarage [] = {"BMW", "Mercedes", "Ford"};
    print_name(myGarage, sizeof(myGarage)/ sizeof(Car));

    return 0;
}