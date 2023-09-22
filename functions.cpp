//Functions in CPP

#include <iostream>
#include <cstdio>

using namespace std;

//Function two multiply 2 mumbers
auto mult(int lhs, int rhs) ->int{
    return lhs*rhs;
}
//function overload
int mult(int x, int y, int z) {
    return x*y*z;
}

int main(){

    cout << mult(6,7) << endl;
    cout << mult(8,9,10) << endl;
}
