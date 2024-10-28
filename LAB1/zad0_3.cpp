#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	int x {};
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand()%100+1;
	std::cout<<"Guess a number"<<std::endl;
	std::cin>>x;
	do {
		
		if(x < randomNumber){
			std::cout<<"Your number is to low"<<std::endl;
			std::cin>>x;
		}else if(x > randomNumber){
			std::cout<<"Your number is to high"<<std::endl;
			std::cin>>x;
		}
		
	}while(x != randomNumber);
	std::cout<<"Congratulation your number is correct " << randomNumber << std::endl;
	return 0;
}
