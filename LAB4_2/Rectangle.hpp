#pragma once

#include "Figure.hpp"/* TODO include proper file (only one) */

/* TODO define Rectangle class inheriting from the Figure class */
class Rectangle : public Figure{
private:
    double m_a;
    double m_b;

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name): m_a(a), m_b(b), Figure(p,"recp"){

    } /* TODO finish this constructor */

public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : m_a(a),m_b(b),Figure(p,"rec"){
        }/* TODO finish this constructor */
   
    /* TODO override the area() function properly */
    double area(void){
        return m_a * m_b;
    }
    /* TODO create proper setters and getters for for sides */
    double getA(void) const{
        return m_a;
    }
    double getB(void) const{
        return m_b;
    }
    void setA(int a){
        m_a = a;
    }
    void setB(int b){
        m_b = b;
    }
    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};