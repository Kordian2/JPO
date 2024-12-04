#include "ComplexNumber.hpp"
#include <iostream>
namespace kb {
namespace jpo{


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
    ComplexNumber operator+(const double r) const{
        return ComplexNumber(m_real + r, m_imag);
    }
    ComplexNumber& operator+=(const ComplexNumber& other){
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }
    ComplexNumber& operator+=(const double r){
        m_real += r;
        return *this;
    }
    ComplexNumber operator-(const ComplexNumber& other) const{
        return ComplexNumber(m_real-other.m_real,m_imag-other.m_imag);
    }
    ComplexNumber operator-(const double r) const{
        return ComplexNumber(m_real - r, m_imag);
    }
    ComplexNumber& operator-=(const ComplexNumber& other){
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }
    ComplexNumber& operator-=(const double r){
        m_real-=r;
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

}
}
int main(){
    kb::jpo::ComplexNumber c1(2,8);
    kb::jpo::ComplexNumber c2(3,4);
    kb::jpo::ComplexNumber c3 = c1 + c2;
    std::cout<<"+ operator: "<<c3<<std::endl;
    c3+=c2;
    std::cout<<"+= operator: "<<c3<<std::endl;
    kb::jpo::ComplexNumber c4 = c1 - c2;
    std::cout<<"- operator: "<<c4<<std::endl;
    c3 -= c2;
    std::cout<<"-= operator: "<<c3<<std::endl;
    kb::jpo::ComplexNumber c5 = c1*c2;
    std::cout<<"* operator: "<<c5<<std::endl;
    c5 *= c1;
    std::cout<<"*= operator: "<<c5<<std::endl;
    kb::jpo::ComplexNumber c6 = c5/c1;
    std::cout<<"/ operator: "<<c6<<std::endl;
    c6 /= c2;
    std::cout<<"/= operator: "<<c6<<std::endl;
    bool c7 = (c1==c6);
    std::cout<<"== operator: "<<c7<<std::endl;
    c7 = (c1 == c2);
    std::cout<<"== operator: "<<c7<<std::endl;
    c7 = (c1!=c6);
    std::cout<<"!= operator: "<<c7<<std::endl;
    c7 = (c1 != c2);
    std::cout<<"!= operator: "<<c7<<std::endl;
    c2 = c1;
    std::cout<<"= operator: "<<c2<<" "<<c1<<std::endl;

    kb::jpo::ComplexNumber c8(4.0,8.0);
    double num = 3.0;
    kb::jpo::ComplexNumber c9 = c8 + num;
    std::cout<<"Double arg for + operator: "<<c9<<std::endl;
    c9+=num;
    std::cout<<"Double arg for += operator: "<<c9<<std::endl;

    kb::jpo::ComplexNumber c10 = c8 - num;
    std::cout<<"Double arg for - operator: "<<c10<<std::endl;
    c10 -= c8;
    std::cout<<"Double arg for -= operator: "<<c10<<std::endl;
}
