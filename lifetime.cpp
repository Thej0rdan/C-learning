//The Lifetime of Memory

#include <iostream>

using namespace std;

int *do_something(int *pInt) {
    int *myVal = nullptr;
    return myVal;
}

int main() {

    int *p1 = new int(42);
    int *p2 = do_something(p1);
    delete p1;
    p1 = nullptr;
    cout << p1 << endl;


}