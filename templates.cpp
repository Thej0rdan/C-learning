// Data STructures---Templates

#include <string>
#include <iostream>

using namespace std;

class Animal{

    protected:
        string myName;
    
    public:
        Animal(string name) : myName(name){
            //This is the constructor initializer list
        }

        //This defines the virtual method the implementation will be added later
        virtual string makeSound() = 0;

        // void giveName(string name){
        //     myName = name;
        // }
    
    //This outputs the name
    string getName(){
        return myName;
    }
};

//This is a class derived from the base Animal() class
class Dog : public Animal {
    public:
        Dog(string name) : Animal(name){

        }

        // This allows you to perform copy assignment operation
        void operator = (const Dog &D){
            myName = D.myName;
        }

        //This implements the virtual method in the Animal class
        string makeSound() override{
            return "woof";
        }

};

//This is a class derived from the base Animal() class
class Cat : public Animal{
    public:
        Cat(string name) : Animal(name){

        }
        // This allows you to perform copy assignment operation
        void operator = (const Cat &C){
            myName = C.myName;
        }

        //This implements the virtual method in the Animal class
         string makeSound() override{
            return "Meow !";
        }
};

template<typename T>
void GetNameandMakeSound(T &theAnimal){
    cout << theAnimal.getName() << " goes ";
    cout << theAnimal.makeSound() << endl;
}


int main(){

    Dog dog = Dog("Hound");
    cout << dog.getName() << " is barking ! ";
    cout << dog.makeSound() << endl;

    Dog dog2 = dog;
    cout << dog2.getName() << " 2 " << " is barking ! ";
    cout << dog2.makeSound() << endl;

    Cat cat = Cat("Fel");
    GetNameandMakeSound(cat);



    return 0;
}