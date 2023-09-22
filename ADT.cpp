//Data Structures--- ADT(Abstract Data types)

#include <string>
#include <iostream>

using namespace std;

class Animal{

    protected:
        string myName;
    
    public:
        Animal(string name) : myName(name){

        }

        virtual string makeSound() = 0;

        // void giveName(string name){
        //     myName = name;
        // }
    
    string getName(){
        return myName;
    }
};

class Dog : public Animal {
    public:
        Dog(string name) : Animal(name){

        }

        void operator = (const Dog &D){
            myName = D.myName;
        }

        string makeSound() override{
            return "woof";
        }

};

int main(){

    Dog dog = Dog("Hound");
    cout << dog.getName() << " is barking ! ";
    cout << dog.makeSound() << endl;

    Dog dog2 = dog;
    cout << dog2.getName() << " is barking ! ";
    cout << dog2.makeSound() << endl;




    return 0;
}