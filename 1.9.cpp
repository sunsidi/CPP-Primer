#include <iostream>

using namespace std;

int main() {
	int sum = 0, i = 50;

	while(i <= 100){
		sum += i;
		i++;
	}

	cout << "The sum of numbers from 50 to 100 is: " << sum << endl;
}