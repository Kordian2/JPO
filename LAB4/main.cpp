#include <iostream>

class Animal{
public:
    virtual void makeSound(void){
        std::cout<<"Sound"<<std::endl;
    }
};
class Dog : public Animal{
    public:
    void makeSound() override {
        std::cout<<"Woof!"<<std::endl;
    }
};
class Cat : public Animal{
    public:
    void makeSound() override {
        std::cout<<"Meow!"<<std::endl;
    }
};

int main(){
    Dog dog;
    Cat cat;
    Animal animal;
    dog.makeSound();
    cat.makeSound();
    animal.makeSound();
}