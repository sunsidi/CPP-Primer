#include <iostream>

int main(){
	std::cout << "Enter two numbers: " << std::endl;
	int number1 = 0, number2 = 0;
	std::cin >> number1 >> number2;
	std::cout << "The sum of " << number1 << " and " << number2 << " is " << number1 + number2 <<std::endl;
	return 0;
}