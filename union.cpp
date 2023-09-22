#include <iostream>

//      ------ Unions in CPP ------ 

union Variant{
    char myString[10];
    int myInteger;
    double myDouble;
};

int main() {
    Variant v;
    v.myInteger = 32;
    printf("My Integer is: %d\n", v.myInteger); 

    v.myDouble = 2.894983;
    printf("My Double is: %f\n", v.myDouble); 

    return 0;
}