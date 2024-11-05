#include "ComplexNumber.hpp"

int main(){
    ComplexNumber c1(2,8);
    ComplexNumber c2(3,4);
    ComplexNumber c3 = c1 + c2;
    std::cout<<"+ operator: "<<c3<<std::endl;
    c3+=c2;
    std::cout<<"+= operator: "<<c3<<std::endl;
    ComplexNumber c4 = c1 - c2;
    std::cout<<"- operator: "<<c4<<std::endl;
    c3 -= c2;
    std::cout<<"-= operator: "<<c3<<std::endl;
    ComplexNumber c5 = c1*c2;
    std::cout<<"* operator: "<<c5<<std::endl;
    c5 *= c1;
    std::cout<<"*= operator: "<<c5<<std::endl;
    ComplexNumber c6 = c5/c1;
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

    ComplexNumber c8(4.0,8.0);
    double num = 3.0;
    ComplexNumber c9 = c8 + num;
    std::cout<<"Double arg for + operator: "<<c9<<std::endl;
    c9+=num;
    std::cout<<"Double arg for += operator: "<<c9<<std::endl;

    ComplexNumber c10 = c8 - num;
    std::cout<<"Double arg for - operator: "<<c10<<std::endl;
    c10 -= c8;
    std::cout<<"Double arg for -= operator: "<<c10<<std::endl;
}