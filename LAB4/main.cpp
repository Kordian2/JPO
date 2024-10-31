#include <iostream>

class Animal{
public:
    virtual void makeSound(void){
        std::cout<<"Sound"<<std::endl;
    }
    virtual ~Animal(){
        std::cout<<"Animal Destructor"<<std::endl;
    }
};
class Dog : public Animal{
public:
    void makeSound() override {
        std::cout<<"Woof!"<<std::endl;
    }
    ~Dog(){
        std::cout<<"Dog Destructor"<<std::endl;
    }
};
class Cat : public Animal{
public:
    ~Cat(){
        std::cout<<"Cat Destructor"<<std::endl;
    }
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
    delete animal;
    

}
