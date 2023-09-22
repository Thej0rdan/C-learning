#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main() {

    vector<string> myCars = {"BMW", "FORD", "FIAT", "VW", "AUDI"};

    for (int i=0; i<myCars.size(); ++i) {
        cout << myCars[i] << endl;
    }


    //Range Based Loop

    cout << "Range_Based_loop"<<endl;

    for (string myCarModel:myCars)  {
        cout << myCarModel << endl;
    }

    int myCarsYear[] = {2002, 2005, 1989, 2010};
    for (int year:myCarsYear){
        if (year == 1989){
            cout << "Car is too old: Classic"<< endl; 
        } else {
            cout << year <<endl;
        }
    }

}