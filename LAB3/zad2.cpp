#include <iostream>
#include "Point.hpp"

int main(){
    Point p1(5,4);
    p1.display();
    p1.setX(2);
    p1.setY(8);
    p1.display();
    std::cout<<"Test of getters: "<<p1.getX() <<" "<<p1.getY()<<std::endl;
}
