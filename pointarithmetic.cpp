#include <iostream>

//      ---- Pointer Arithmetic ----

using namespace std;

int main() {

    int a[] {1, 2, 3, 4, 5};
    int *pa = a;
    *pa = 11;
    a[1] = 12;
    pa[2] = 13;
    *(pa + 3) = 14;

    for (int i=0; i<5; i++) {
        cout << a[i] << endl;
    }

    return 0;
}