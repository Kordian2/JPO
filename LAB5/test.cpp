#include <iostream>
#include <type_traits>
#include <cmath> // For std::abs

template <typename T>
requires std::is_arithmetic_v<T> // Restrict to arithmetic types
class ComplexNumber {
private:
    T m_real;
    T m_imag;

public:
    ComplexNumber(T r = 0, T i = 0) : m_real(r), m_imag(i) {}

    void setReal(T r) { m_real = r; }
    T getReal() const { return m_real; }

    void setImag(T i) { m_imag = i; }
    T getImag() const { return m_imag; }

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
    }

    ComplexNumber operator+(const T r) const {
        return ComplexNumber(m_real + r, m_imag);
    }

    ComplexNumber& operator+=(const ComplexNumber& other) {
        m_real += other.m_real;
        m_imag += other.m_imag;
        return *this;
    }

    ComplexNumber& operator+=(const T r) {
        m_real += r;
        return *this;
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
    }

    ComplexNumber operator-(const T r) const {
        return ComplexNumber(m_real - r, m_imag);
    }

    ComplexNumber& operator-=(const ComplexNumber& other) {
        m_real -= other.m_real;
        m_imag -= other.m_imag;
        return *this;
    }

    ComplexNumber& operator-=(const T r) {
        m_real -= r;
        return *this;
    }

    ComplexNumber operator*(const ComplexNumber& other) const {
        T r = m_real * other.m_real - m_imag * other.m_imag;
        T i = m_real * other.m_imag + m_imag * other.m_real;
        return ComplexNumber(r, i);
    }

    ComplexNumber& operator*=(const ComplexNumber& other) {
        T r = m_real * other.m_real - m_imag * other.m_imag;
        T i = m_real * other.m_imag + m_imag * other.m_real;
        m_real = r;
        m_imag = i;
        return *this;
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
        T reNum = m_real * other.m_real + m_imag * other.m_imag;
        T imNum = m_imag * other.m_real - m_real * other.m_imag;
        return ComplexNumber(reNum / denom, imNum / denom);
    }

    ComplexNumber& operator/=(const ComplexNumber& other) {
        T denom = other.m_real * other.m_real + other.m_imag * other.m_imag;
        T reNum = m_real * other.m_real + m_imag * other.m_imag;
        T imNum = m_imag * other.m_real - m_real * other.m_imag;
        m_real = reNum / denom;
        m_imag = imNum / denom;
        return *this;
    }

    bool operator==(const ComplexNumber& other) const {
        return (m_real == other.m_real && m_imag == other.m_imag);
    }

    bool operator!=(const ComplexNumber& other) const {
        return !(*this == other);
    }

    ComplexNumber& operator=(const ComplexNumber& other) {
        m_real = other.m_real;
        m_imag = other.m_imag;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
        os << c.m_real << (c.m_imag >= 0 ? "+" : "-") << std::abs(c.m_imag) << "i";
        return os;
    }
}; // Add a semicolon at the end of the class

int main() {
    ComplexNumber<double> c1(2.0, 8.0);
    ComplexNumber<double> c2(3.0, 4.0);
    ComplexNumber<double> c3 = c1 + c2;
    std::cout << "+ operator: " << c3 << std::endl;

    c3 += c2;
    std::cout << "+= operator: " << c3 << std::endl;

    ComplexNumber<double> c4 = c1 - c2;
    std::cout << "- operator: " << c4 << std::endl;

    c3 -= c2;
    std::cout << "-= operator: " << c3 << std::endl;

    ComplexNumber<double> c5 = c1 * c2;
    std::cout << "* operator: " << c5 << std::endl;

    c5 *= c1;
    std::cout << "*= operator: " << c5 << std::endl;

    ComplexNumber<double> c6 = c5 / c1;
    std::cout << "/ operator: " << c6 << std::endl;

    c6 /= c2;
    std::cout << "/= operator: " << c6 << std::endl;

    bool c7 = (c1 == c6);
    std::cout << "== operator: " << c7 << std::endl;

    c7 = (c1 == c2);
    std::cout << "== operator: " << c7 << std::endl;

    c7 = (c1 != c6);
    std::cout << "!= operator: " << c7 << std::endl;

    c7 = (c1 != c2);
    std::cout << "!= operator: " << c7 << std::endl;

    c2 = c1;
    std::cout << "= operator: " << c2 << " " << c1 << std::endl;

    ComplexNumber<double> c8(4.0, 8.0);
    double num = 3.0;

    ComplexNumber<double> c9 = c8 + num;
    std::cout << "Double arg for + operator: " << c9 << std::endl;

    c9 += num;
    std::cout << "Double arg for += operator: " << c9 << std::endl;

    ComplexNumber<double> c10 = c8 - num;
    std::cout << "Double arg for - operator: " << c10 << std::endl;

    c10 -= c8;
    std::cout << "Double arg for -= operator: " << c10 << std::endl;

    std::cout << "INT TEST: " << std::endl;
    int x{2};
    int y{8};

    ComplexNumber<int> c11(x, y);
    ComplexNumber<int> c12(y, x);
    std::cout << c11 << std::endl;
    c11 += c12;
    std::cout << c11 << std::endl;

    return 0;
}
