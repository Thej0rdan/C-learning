#include <iostream>
#include <cstdio>

using namespace std;

int main () {

    for (int i=0; i < 10; ++i){
        cout << i << endl;
        if (i==5) {
            goto end;
        }
    }

    end:
        cout << "end"<< endl;
}
