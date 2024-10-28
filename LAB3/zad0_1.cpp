#include <iostream>
#include <string>
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
int main(){
    Student student1;
    student1.setAge(15);
    student1.setName("Ala");
    std::cout<<student1.getAge()<<std::endl;
    std::cout<<student1.getName()<<std::endl;
    
    Student student2;
    student2.setAge(-5);
    student2.setName("");
    std::cout<<student2.getAge()<<std::endl;
    std::cout<<student2.getName()<<std::endl;
}
