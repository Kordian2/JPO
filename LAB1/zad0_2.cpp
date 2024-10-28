#include <iostream>
#include <vector>
int main()
{
	int x {};
	std::vector<int> vec(5);
	for(int i = 0; i<=4; i++){
		std::cout<<"Enter a number "<<i+1<<std::endl;
		std::cin>>x;
		vec[i] = x;
	}
	std::cout<<"Your numbers: "<<std::endl;
	for (int i = 0; i<=4; i++){
		std::cout<<vec[i]<<std::endl;
	}
	return 0;
	
}
