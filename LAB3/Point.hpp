#include <iostream>

class Point {
private:
    int m_x {};
    int m_y {};
public:
    Point(int x,int y) : m_x(x), m_y(y) {

    }
    void setX(int x){
        m_x = x;
    }
    void setY(int y){
        m_y = y;
    }
    int getX() const {
        return m_x;
    }
    int getY() const {
        return m_y;
    }
    void display(void){
        std::cout<<"Your Point (x,y) is: ("<<getX()<<","<<getY()<<")"<<std::endl;
    }     

};
