#include <iostream>
#include "Circle.hpp"

int main(){
    std::cout<<"Circle.hpp test"<<std::endl;
    Circle c1(4.2,0,5);
    c1.getPoint().display();
    std::cout<<"Your radius is: "<<c1.getRadius()<<std::endl;
    std::cout<<"Your area is equal to: "<<c1.area()<<std::endl;
}