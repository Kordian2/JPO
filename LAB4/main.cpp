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
Animal* chooseAnimal(int number) {
    if (number%2 == 0) {
        return new Dog();
    } else {
        return new Cat();
    }
}
int main(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    Dog* dog = new Dog;
    Cat* cat = new Cat;
    
    dog->makeSound();
    cat->makeSound();
    
}