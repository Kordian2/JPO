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
    ComplexNumber operator+(const ComplexNumber& other) const{
        return ComplexNumber(m_real + other.m_real,m_imag + other.m_imag);
    }
    ComplexNumber& operator+=(const ComplexNumber& other){
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }
    ComplexNumber operator-(const ComplexNumber& other) const{
        return ComplexNumber(m_real-other.m_real,m_imag-other.m_imag);
    }
    ComplexNumber& operator-=(const ComplexNumber& other){
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }
    ComplexNumber operator*(const ComplexNumber& other) const{
        double r = m_real*other.m_real - m_imag*other.m_imag;
        double i = m_real*other.m_imag + m_imag*other.m_real;
        return ComplexNumber(r, i);
    }
    ComplexNumber& operator*=(const ComplexNumber& other) {
        double r = m_real*other.m_real - m_imag*other.m_imag;
        double i = m_real*other.m_imag + m_imag*other.m_real;
        m_real = r;
        m_imag = i;
        return *this;
    }
    ComplexNumber operator/(const ComplexNumber& other) const{
        double denom = other.m_real*other.m_real + other.m_imag*other.m_imag;
        double reNum = m_real*other.m_real + m_imag*other.m_imag;
        double imNum = m_imag * other.m_real - m_real * other.m_imag;
        return ComplexNumber(reNum/denom,imNum/denom);
    }
    ComplexNumber& operator /=(const ComplexNumber& other) {
        double denom = other.m_real*other.m_real + other.m_imag*other.m_imag;
        double reNum = m_real*other.m_real + m_imag*other.m_imag;
        double imNum = m_imag * other.m_real - m_real * other.m_imag;
        m_real = reNum/denom;
        m_imag = imNum/denom;
        return *this;
    }
    bool operator==(const ComplexNumber& other) const{
        return (m_real == other.m_real && m_imag == other.m_imag);
    }
    bool operator!=(const ComplexNumber& other) const{
        return (m_real != other.m_real || m_imag != other.m_imag);
    }
    ComplexNumber& operator=(const ComplexNumber& other) {
        m_real = other.m_real;
        m_imag = other.m_imag;
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os<<c.m_real<<(c.m_imag >= 0 ? "+" : "-")<<std::abs(c.m_imag)<<"i";
        return os;
    }

};
