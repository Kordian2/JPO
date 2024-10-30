#pragma once

#include "Rectangle.hpp"

/* TODO define Square class inheriting from the Rectangle class */
class Square : public Rectangle{ /*napewno public??*/
public:
    // parametrized constructor
    Square(double a, const Point &p) : Rectangle(a,a,p,"Square"){

    } /* TODO finish this constructor */
};