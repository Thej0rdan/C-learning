//Declarations without type - AUTO

#include <iostream>
#include <cstdio>
#include <vector>
#include <tuple>
#include <string>

using namespace std;


int main() {

    auto a = 42;        //INT
    auto b = 42l;       //Long
    auto c = 42ll;      //Long Long
    auto d = 1.0f;      //Float
    auto e = 1.0;       //double
    auto f = 'A';       //char
    auto g = true;;     //bool

    vector<tuple<string, int>> myCars;
    myCars.push_back(make_tuple("BMW - ", 2001));
    myCars.push_back(make_tuple("Ford Mustang - ", 1989));
    myCars.push_back(make_tuple("VW Golf -  ", 2010));
    myCars.push_back(make_tuple("FodMustang -  ", 2015));

    // for (tuple<string, int> myVehicles:myCars){
    //     cout << get<0>(myVehicles) << "" << get<1>(myVehicles) << endl;
    // }

    for (auto myVehicles:myCars){
        cout << get<0>(myVehicles) << "" << get<1>(myVehicles) << endl;
    }
}