#include <iostream>
#include <cstdlib>

using namespace std;

// The Time Complexity is an asymptotic analysis.

void looping(int n){  /*Assuming TIME COMPLEXITY (n) = 4n + 1
The time complexity would drop with faster hardware let's say 2n + 0.5*/
    int i = 0;
    while (i < n){
        cout << i++ << endl;
    }
}

void pairing(int n){ // 1 + (n * (4n + 1) + 2)
    int i = 0;       // TIME COMPLEXITY (n) = 4n^2 + n + 3
    while (i<n){
        int j = 0;
        while (j<n){
            cout << i << ", " << j << endl;
            j = j++;
        }
        
    }
}

int main() {

    int n;
    cout << "Enter a value:";
    cin >> n;
    looping(n);

    return 0;
}