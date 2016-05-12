#include <iostream>

using namespace std;

int main() {
	cout << "Please enter two integers:" << endl;;
	int n1 = 0, n2 = 0;
	cin >> n1 >> n2;
	if(n1 > n2) {
		while(n2<(n1 - 1)) {
			cout << n2 + 1 << endl;
			n2++;
		}
	}else {
		while((n2 - 1)>n1) {
			cout << n1 + 1 << endl;
			n1++;
		}
	}
}