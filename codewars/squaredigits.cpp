#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

//Function to square every digit of a sequence and concatenate it
int main() {
    const int n = 6;
    vector<int> nums = {9, 2, 4, 7, 8,2};
    for (int i : nums){
       int nums = pow(i,2);
       cout << nums << endl;
    }
}
