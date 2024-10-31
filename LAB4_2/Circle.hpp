#include "Figure.hpp"

class Circle : public Figure{
private:
	double m_r;
public:
	Circle(double r, const Point &p) : m_r(r), Figure(p, "circle"){}
        double area(void) const override{
		return 3.14*m_r*m_r;
        }
	double getR(void) const {
		return m_r;
	}
	void setR(double r){
		m_r = r;
	}
	void description() const override {
		std::cout<< "My radius is: " << m_r <<std::endl;
		printCentre();
	}
};
