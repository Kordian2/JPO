#pragma once

#include <iostream>
#include <string>
#include /* TODO include proper file (only one) */

class Figure {
private:
    Point m_centre;
    std::string m_name;
public:
    // parametrized constructor
    Figure(const Point &p, std::string name) : /* TODO finish this constructor */

    virtual double area() const = 0;
    virtual void description() const = 0;

    void printCentre() const {
        std::cout << "My centre is (" << /* TODO get the x value */ << ", " << /* TODO get the y value */ << ")" << std::endl;
    }

    void introduce() const {
        std::cout << "I'm a " << m_name << std::endl;
    }

    /* TODO create a setter and getter for centre */
};