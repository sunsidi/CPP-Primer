#include <iostream>

int main(){
	std::cout << "Enter two numbers: ";
	std::cout << std::endl;
	int number1 = 0, number2 = 0;
	std::cin >> number1;
	std::cin >> number2;
	std::cout << "The sum of ";
	std::cout << number1;
	std::cout << " and ";
	std::cout << number2;
	std::cout << " is ";
	std::cout << number1 * number2;
	std::cout << std::endl;
	return 0;
}