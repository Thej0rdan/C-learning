// FUNCTIONS---Initializer Lists

#include <string>
#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> values){
    int sum = 0;
    values.size();
    for (int i:values){
        sum +=i;
    }
    return sum;
}

int main() {

    cout << sum({}) << endl;
    cout << sum({-6, -5, -4, -3, -2, -1}) << endl;
    cout << sum({10, 20,30}) << endl;

}