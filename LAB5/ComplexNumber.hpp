#include <iostream>

class ComplexNumber{
private:
    double m_real;
    double m_imag;
public:
    ComplexNumber(double r = 0, double i = 0) : m_real(r),m_imag(i){};
    void setReal(double r){
        m_real = r;
    }
    double getReal(void) const{
        return m_real;
    }
    void setImag(double i){
        m_imag = i;
    }
    double getImag(void) const{
        return m_imag;
    }
    
};
