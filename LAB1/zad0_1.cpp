#include <iostream>

int main()
{
	int x {};
	int i {0};
	int z {0};
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>x;
	if (x < 0){
		std::cout<<"Your number need to be higher than 0"<<std::endl;
		std::cout<<"Enter a number higher than 0"<<std::endl;
		std::cin>>x;
	}
	for(i;i <= x;i++){
		std::cout << i << std::endl;
		z += i;
	}
	std::cout<<"sum: "<<z<<std::endl;
	return 0;
}	
