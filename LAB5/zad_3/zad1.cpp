#include "ComplexNumber.hpp"
#include <iostream>





int main(){
    kb::jpo::ComplexNumber c1(2.0,8.0);
    kb::jpo::ComplexNumber c2(3.0,4.0);
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
    std::cout<<"INT TEST: "<<std::endl;
    int x {2};
    int y {8};
    kb::jpo::ComplexNumber c11(x,y);
    kb::jpo::ComplexNumber c12(y,x);
    std::cout<<c11<<std::endl;
    c11 += c12;
    //std::cout<<c11<<std::endl;
    //kb::jpo::ComplexNumber c13("string","test");
    
}
