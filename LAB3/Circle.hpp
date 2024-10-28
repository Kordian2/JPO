
#include <iostream>
#include "Point.hpp"
class Circle{
private:
    double *radius;
    Point center;
public:
    Circle(double r, int x, int y) : center(x,y){
        radius = new double;
        *radius = r;
    }

};