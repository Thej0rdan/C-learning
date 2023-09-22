#include <iostream>

//      ---- Const and casts with pointers ----
using namespace std;

int main() {

    // char c[] {"hello"}; 
    // *c = 'H';
    // const char *ptc{c};
    // cout << c << endl; 
    // *ptc = 'Y';
    // char *const cp{c};
    // *cp = 'y';
    // cp++;

    char c[]{"hello"};
    char *const cp1{c};
    *cp1 = 'H';
    const char *ptc = const_cast<const char*>(cp1);
    ptc++;
    char *const cp2 = const_cast<char *const>(ptc);
    *cp2 = 'a'; 

}