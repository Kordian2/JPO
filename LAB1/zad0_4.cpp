#include <iostream>


double fahrenheitToCelsius(double fahrenheit){
	return (5.0/9.0) * (fahrenheit - 32.0);
}

int main()
{
	double fahrenheit {};

	std::cout<<"Enter temperature in fahrenheit"<<std::endl;
	std::cin>>fahrenheit;
	double celsius = fahrenheitToCelsius(fahrenheit);
	std::cout << "Temperature in Celsius: " << celsius << std::endl;
	return 0;
}
