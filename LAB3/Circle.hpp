
#include <iostream>
#include "Point.hpp"
class Circle{
private:
    double *radius;
    Point m_center;
public:
    Circle(double r, int x, int y) : m_center(x,y){
        radius = new double;
        *radius = r;
    }
    int setPoint(int x, int y){
        m_center.setX(x);
        m_center.setY(y);
    }
    int setRadius(int r){
        *radius = r;
    }

};