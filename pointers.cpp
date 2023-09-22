#include <iostream> 
//          ------ Pointers ------
using namespace std;

int main() { 

    int a = 92;
    cout << a << endl;
    
    int *pi{&a}; 
    *pi = 600;

    cout << a << endl;

    return 0;
}