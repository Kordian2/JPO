#pragma once
#include <iostream>
namespace kb{
    namespace jpo{

template <typename T>
requires std::is_arithmetic_v<T>
class ComplexNumber{
private:
    T m_real;
    T m_imag;
public:
    ComplexNumber(T r = 0, T i = 0) : m_real(r),m_imag(i){};
    void setReal(T r){
        m_real = r;
    }
    T getReal(void) const{
        return m_real;
    }
    void setImag(T i){
        m_imag = i;
    }
    T getImag(void) const{
        return m_imag;
    }
    ComplexNumber operator+(const ComplexNumber& other) const{
        return ComplexNumber(m_real + other.m_real,m_imag + other.m_imag);
    }
    ComplexNumber operator+(const T r) const{
        return ComplexNumber(m_real + r, m_imag);
    }
    ComplexNumber& operator+=(const ComplexNumber& other){
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }
    ComplexNumber& operator+=(const T r){
        m_real += r;
        return *this;
    }
    ComplexNumber operator-(const ComplexNumber& other) const{
        return ComplexNumber(m_real-other.m_real,m_imag-other.m_imag);
    }
    ComplexNumber operator-(const T r) const{
        return ComplexNumber(m_real - r, m_imag);
    }
    ComplexNumber& operator-=(const ComplexNumber& other){
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }
    ComplexNumber& operator-=(const T r){
        m_real-=r;
        return *this;
    }
    ComplexNumber operator*(const ComplexNumber& other) const{
        T r = m_real*other.m_real - m_imag*other.m_imag;
        T i = m_real*other.m_imag + m_imag*other.m_real;
        return ComplexNumber(r, i);
    }
    ComplexNumber& operator*=(const ComplexNumber& other) {
        T r = m_real*other.m_real - m_imag*other.m_imag;
        T i = m_real*other.m_imag + m_imag*other.m_real;
        m_real = r;
        m_imag = i;
        return *this;
    }
    ComplexNumber operator/(const ComplexNumber& other) const{
        T denom = other.m_real*other.m_real + other.m_imag*other.m_imag;
        T reNum = m_real*other.m_real + m_imag*other.m_imag;
        T imNum = m_imag * other.m_real - m_real * other.m_imag;
        return ComplexNumber(reNum/denom,imNum/denom);
    }
    ComplexNumber& operator /=(const ComplexNumber& other) {
        T denom = other.m_real*other.m_real + other.m_imag*other.m_imag;
        T reNum = m_real*other.m_real + m_imag*other.m_imag;
        T imNum = m_imag * other.m_real - m_real * other.m_imag;
        m_real = reNum/denom;
        m_imag = imNum/denom;
        return *this;
    }
    bool operator==(const ComplexNumber& other) const{
        return (m_real == other.m_real && m_imag == other.m_imag);
    }
    bool operator!=(const ComplexNumber& other) const{
        return !(*this == other);
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