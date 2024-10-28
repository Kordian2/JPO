#include <iostream>
#include <string>

class GlobalClass {
public:
	GlobalClass(){
		std::cout<<"Constructor of GlobalClass called"<<std::endl;
	}
	~GlobalClass(){
		std::cout<<"Destructor of GlobalClass called"<<std::endl;
	}
};
class LocalClass{
public:
	LocalClass(){
		std::cout<<"Constructor of LocalClass called"<<std::endl;
	}
	~LocalClass(){
		std::cout<<"Destructor of LocalClass called"<<std::endl;
	}
};
GlobalClass globalClass;
class BlockClass {
public:
	BlockClass(){
		std::cout<<"Constructor of BlockClass"<<std::endl;
	}
	~BlockClass(){
		std::cout<<"Destructor of BlockClass"<<std::endl;
	}
};
int main(){
	std::cout<<"Entering main() function"<<std::endl;
	LocalClass localClass;
	{
		BlockClass blockClass;
	}
	std::cout<<"Leaving main() function"<<std::endl;
}








