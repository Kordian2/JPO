#include <iostream>
#include <string>

int main(){
class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
	if(a < 0){
		std::cout<<"Your age is wrong"<<std::endl;
	}else{
        	m_age = a;
	}
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(n.empty()){
		std::cout<<"Your string is empty"<<std::endl;
	}else{
	m_name = n;
	}
    }
    std::string getName() const {
        return m_name;
    }
};
}
