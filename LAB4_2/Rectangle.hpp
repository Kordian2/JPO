#pragma once

#include /* TODO include proper file (only one) */

/* TODO define Rectangle class inheriting from the Figure class */
private:
    double m_a;
    double m_b;

protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) : /* TODO finish this constructor */

public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : /* TODO finish this constructor */
   
    /* TODO override the area() function properly */

    /* TODO create proper setters and getters for for sides */

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};