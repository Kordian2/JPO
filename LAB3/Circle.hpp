
#include <iostream>
#include "Point.hpp"
#include <math.h>
#include <cmath>
class Circle{
private:
    double *radius;
    Point m_center;
public:
    Circle(double r, int x, int y) : m_center(x,y){
        radius = new double;
        *radius = r;
    }
    ~Circle(){
        delete radius;
        std::cout<<"Destructor is called"<<std::endl;
    };
    void setPoint(int x, int y){
        m_center.setX(x);
        m_center.setY(y);
    }
    void setRadius(int r){
        *radius = r;
    }
    Point getPoint(void) const{
        return m_center;
    }
    double getRadius() const{
        return *radius;
    }
    double area(void){
        return M_PI**radius**radius;
    }

};