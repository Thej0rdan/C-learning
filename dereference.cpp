#include <iostream>

//      ----Dereference Operator ----
using namespace std;

int main() {

    int myAge = 2;
    int *age_address = &myAge;
    printf("My Age is: %d\n", *age_address );
    printf("My Age  address is: %p\n", age_address );

    *age_address =1099;
    printf("My Age is: %d\n", *age_address );
    printf("My Age  address is:  %p\n", age_address );


    return 0; 
}