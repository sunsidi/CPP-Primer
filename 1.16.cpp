#include <iostream>

using namespace std;

int main() {
	cout << "Please enter the integers: " <<endl;
	int v = 0, sum = 0;
	while(cin >> v) {
		sum += v;
	}

	cout << "The sum is " << sum << endl;
}