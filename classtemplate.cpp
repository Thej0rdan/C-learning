#include <string>
#include <iostream>

using namespace std;

class Animal {
    protected:
        string myName;
    
    public:
        Animal(string name) : myName(name){}
    
    virtual string makeSound() = 0;

    string getName(){
        return myName;
    }
};

class Dog : public Animal {
    public:
        Dog(string name) : Animal(name){}

        void operator = (const Dog &D){
            myName = D.myName;
        }

        string makeSound() override{
            return "woof!";
        }

};

class Cat : public Animal{
    public:
        Cat(string name) : Animal(name){}
        // This allows you to perform copy assignment operation
        void operator = (const Cat &C){
            myName = C.myName;
        }

        //This implements the virtual method in the Animal class
         string makeSound() override{
            return "meow!";
        }
};

template<typename T>
void GetNameandMakeSound(T &theAnimal){
    cout << theAnimal.getName() << " goes ";
    cout << theAnimal.makeSound() << endl;
}

template <typename T>
class AnimalTemplate {
    private:
        T myAnimal;
    
    public:
        AnimalTemplate(T animal) : myAnimal(animal){}

    void GetNameandMakeSound(){
    cout << myAnimal.getName() << " goes ";
    cout << myAnimal.makeSound() << endl;
}


};

int main() {

    Dog dog = Dog("Labrador");
    AnimalTemplate<Dog> dogTemplate(dog);
    dogTemplate.GetNameandMakeSound();

    Cat cat = Cat("Eston");
    AnimalTemplate<Cat> catTemplate(cat);
    catTemplate.GetNameandMakeSound();

    return 0;
}