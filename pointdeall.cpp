#include <iostream>

//      ----Allocating and deallocating ----

using namespace std;

int main() {

    int arr[] {1, 2, 3, 4, 5};
    for (int i=0; i< 6; i++) {
         int a = arr[i] += arr[i + 1];
         cout << a << endl;
    }
 

    return 0;
}