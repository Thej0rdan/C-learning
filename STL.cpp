//Memory and STL

#include <iostream>
#include <array>

using namespace std;


int main() {

    //array and vector- Standard Library Arrays
    array<int, 4> arr{1, 2, 3, 4};
 
    for (int i:arr) {
        cout << i <<endl;
    }

}